class MyException : public std::exception {
	const char* file;
    int line;
    const char* func;
    const char* info;
    
    public:
    	MyException(const char* msg, const char* file_, int line_, const char* func_, const char* info_ = "") : std::exception(msg),
        	file (file_),
        	line (line_),
        	func (func_),
        	info (info_)
        {
        }
        
        const char* get_file() const { return file; }
        int get_line() const { return line; }
		const char* get_func() const { return func; }
        const char* get_info() const { return info; }
       
}

int main()
{
	try
    {
    	some_function()
    }
    catch (MyException& ex)
    {
    	std::cout << ex.what() << ex.get_info() << std::endl;
        std::cout << "Function: " << ex.get_func() << std::endl;
        return EXIT_FAILURE;
    }

}
