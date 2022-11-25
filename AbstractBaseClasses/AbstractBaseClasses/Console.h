#pragma once


namespace System
{

	// Colors - can be used as Foreground or Background
	enum ConsoleColor
	{
		Black = 0,
		DarkBlue = FOREGROUND_BLUE,
		DarkGreen = FOREGROUND_GREEN,
		DarkCyan = FOREGROUND_GREEN | FOREGROUND_BLUE,
		DarkRed = FOREGROUND_RED,
		DarkMagenta = FOREGROUND_RED | FOREGROUND_BLUE,
		DarkYellow = FOREGROUND_RED | FOREGROUND_GREEN,
		Gray = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
		DarkGray = FOREGROUND_INTENSITY,
		Blue = FOREGROUND_BLUE | FOREGROUND_INTENSITY,
		Green = FOREGROUND_GREEN | FOREGROUND_INTENSITY,
		Cyan = FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
		Red = FOREGROUND_RED | FOREGROUND_INTENSITY,
		Magenta = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
		Yellow = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
		White = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	};

	class Console
	{
		
		static HANDLE out;
		static WORD defColors;
		static HWND hwnd;

		
		static void Show(wchar_t symbol);

	public:
		
		static WORD ForegroundColor();
		
		static void ForegroundColor(WORD attr);
		
		static WORD BackgroundColor();
	
		static void BackgroundColor(WORD attr);
	
		static void ResetColor();
		
		static int WindowWidth();
		
		static int WindowHeight();
		
		static void SetWindowSize(int columns, int rows);

		static void SetBufferSize(int columns, int rows);

		static int CursorLeft();

		static int CursorTop();

		static void SetCursorPosition(int left, int top);

		static void Clear();

		static void CursorVisible(bool visible);

		static void Lock(bool lock);

		static void EOLWrap(bool on);

		static void FlushKeys();

		static void Show(int x, int y, wchar_t symbol);

		static void DrawBox(int left, int top, int width, int height, bool dbl);

		static char const* RandomName();

		static void WordWrap(int x, int y, int w, char const* const t);
	};

	class PC
	{
		long long freq, start;

	public:
		PC(bool go);
		void Start();
		double Finish() const;
	};

}

