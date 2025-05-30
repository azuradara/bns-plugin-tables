/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include <variant>

namespace BnsTables::Shared {
	#pragma pack(push, 1)
	const struct ExplicitTableRef {__int32 TableId; __int64 Key; };
const struct IconRef {__int64 IcontextureId; __int32 IconIndex; };
const struct TextRef {__int32 Unk; wchar_t* ReadableText; };
const struct XYZ {__int32 X; __int32 Y; __int32 Z; };
const struct RGB {unsigned char R; unsigned char G; unsigned char B; };
const struct TableRef { __int64 Key; };
const struct UnkFlag { char Unk[20]; };
const struct TableVersion { union Version { struct { __int16 MajorVersion; __int16 MinorVersion; }; unsigned __int32 VersionKey; }; Version Version; TableVersion() = default; TableVersion(__int16 major, __int16 minor) : Version{major, minor} {} };
const struct DataView {
		const char* Data;
		long long Length;
		//default constructor
		DataView() : Data(nullptr), Length(0) {}
		DataView(const char* ptr, long long len) : Data(ptr), Length(len) {}
	};
struct RecordResult {
		BnsTables::Shared::DataView* recordDataView;
		BnsTables::Shared::DataView* lookupDataView;
	};

	#pragma pack(pop)
	using FieldVariant = std::variant<std::monostate,__int16,bool,signed char,__int64,__int32,wchar_t*,float,BnsTables::Shared::TableRef,BnsTables::Shared::ExplicitTableRef,BnsTables::Shared::IconRef,BnsTables::Shared::TextRef,BnsTables::Shared::UnkFlag,BnsTables::Shared::RGB,BnsTables::Shared::XYZ>;
}