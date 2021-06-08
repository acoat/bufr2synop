Name:		bufr2synop
Version:	0.13.0
Release:	2%{?dist}
Summary:	Decode and get meteorological reports in Traditional Alphanumeric Code format from binary BUFR.


Group:		Productivity/Scientific/Other
License:	GPLv2
URL:		https://github.com/gbvalor/bufr2synop
Source0:	%{name}-%{version}.tar.gz

#BuildRequires:	
#Requires:	

%description


%prep
%setup -q


%build
make -f Makefile.cvs
#%configure --prefix=/opt/bufr2synop --enable-bufrdc=yes
./configure --prefix=/opt/bufr2synop
make %{?_smp_mflags}


%install
#%make_install 
make DESTDIR=$RPM_BUILD_ROOT install

%files
%doc
/opt/bufr2synop/bin/*
/opt/bufr2synop/include/*
/opt/bufr2synop/lib/*
/opt/bufr2synop/share/*


%changelog

