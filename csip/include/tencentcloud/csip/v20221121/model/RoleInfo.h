/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ROLEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ROLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/KeyValue.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Alarm Data Attacker or Victim Information
                */
                class RoleInfo : public AbstractModel
                {
                public:
                    RoleInfo();
                    ~RoleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP
                     * @return IP IP
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP
                     * @param _iP IP
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取HostIP
                     * @return HostIP HostIP
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置HostIP
                     * @param _hostIP HostIP
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取Original IP
                     * @return OriginIP Original IP
                     * 
                     */
                    std::string GetOriginIP() const;

                    /**
                     * 设置Original IP
                     * @param _originIP Original IP
                     * 
                     */
                    void SetOriginIP(const std::string& _originIP);

                    /**
                     * 判断参数 OriginIP 是否已赋值
                     * @return OriginIP 是否已赋值
                     * 
                     */
                    bool OriginIPHasBeenSet() const;

                    /**
                     * 获取Port.
                     * @return Port Port.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port.
                     * @param _port Port.
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取asset ID
                     * @return InstanceID asset ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置asset ID
                     * @param _instanceID asset ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取city
                     * @return City city
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置city
                     * @param _city city
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Province
                     * @return Province Province
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置Province
                     * @param _province Province
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取nation
                     * @return Country nation
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置nation
                     * @param _country nation
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取Address.
                     * @return Address Address.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address.
                     * @param _address Address.
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取latitude
                     * @return Latitude latitude
                     * 
                     */
                    std::string GetLatitude() const;

                    /**
                     * 设置latitude
                     * @param _latitude latitude
                     * 
                     */
                    void SetLatitude(const std::string& _latitude);

                    /**
                     * 判断参数 Latitude 是否已赋值
                     * @return Latitude 是否已赋值
                     * 
                     */
                    bool LatitudeHasBeenSet() const;

                    /**
                     * 获取longitude
                     * @return Longitude longitude
                     * 
                     */
                    std::string GetLongitude() const;

                    /**
                     * 设置longitude
                     * @param _longitude longitude
                     * 
                     */
                    void SetLongitude(const std::string& _longitude);

                    /**
                     * 判断参数 Longitude 是否已赋值
                     * @return Longitude 是否已赋值
                     * 
                     */
                    bool LongitudeHasBeenSet() const;

                    /**
                     * 获取Information.
                     * @return Info Information.
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置Information.
                     * @param _info Information.
                     * 
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取Domain
                     * @return Domain Domain
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain
                     * @param _domain Domain
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Enterprise Name
                     * @return Name Enterprise Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Enterprise Name
                     * @param _name Enterprise Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Account
                     * @return Account Account
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置Account
                     * @param _account Account
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取Family Group
                     * @return Family Family Group
                     * 
                     */
                    std::string GetFamily() const;

                    /**
                     * 设置Family Group
                     * @param _family Family Group
                     * 
                     */
                    void SetFamily(const std::string& _family);

                    /**
                     * 判断参数 Family 是否已赋值
                     * @return Family 是否已赋值
                     * 
                     */
                    bool FamilyHasBeenSet() const;

                    /**
                     * 获取Virus name
                     * @return VirusName Virus name
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置Virus name
                     * @param _virusName Virus name
                     * 
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取MD5 Value
                     * @return MD5 MD5 Value
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置MD5 Value
                     * @param _mD5 MD5 Value
                     * 
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     * 
                     */
                    bool MD5HasBeenSet() const;

                    /**
                     * 获取Malicious process filename
                     * @return FileName Malicious process filename
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Malicious process filename
                     * @param _fileName Malicious process filename
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取1-Host Assets; 2-Domain Assets; 3-Network Assets
                     * @return AssetType 1-Host Assets; 2-Domain Assets; 3-Network Assets
                     * 
                     */
                    int64_t GetAssetType() const;

                    /**
                     * 设置1-Host Assets; 2-Domain Assets; 3-Network Assets
                     * @param _assetType 1-Host Assets; 2-Domain Assets; 3-Network Assets
                     * 
                     */
                    void SetAssetType(const int64_t& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取Information Fields of Source Log Analysis
                     * @return FromLogAnalysisData Information Fields of Source Log Analysis
                     * 
                     */
                    std::vector<KeyValue> GetFromLogAnalysisData() const;

                    /**
                     * 设置Information Fields of Source Log Analysis
                     * @param _fromLogAnalysisData Information Fields of Source Log Analysis
                     * 
                     */
                    void SetFromLogAnalysisData(const std::vector<KeyValue>& _fromLogAnalysisData);

                    /**
                     * 判断参数 FromLogAnalysisData 是否已赋值
                     * @return FromLogAnalysisData 是否已赋值
                     * 
                     */
                    bool FromLogAnalysisDataHasBeenSet() const;

                    /**
                     * 获取Container name
                     * @return ContainerName Container name
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置Container name
                     * @param _containerName Container name
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取container ID
                     * @return ContainerID container ID
                     * 
                     */
                    std::string GetContainerID() const;

                    /**
                     * 设置container ID
                     * @param _containerID container ID
                     * 
                     */
                    void SetContainerID(const std::string& _containerID);

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     * 
                     */
                    bool ContainerIDHasBeenSet() const;

                private:

                    /**
                     * IP
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * HostIP
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Original IP
                     */
                    std::string m_originIP;
                    bool m_originIPHasBeenSet;

                    /**
                     * Port.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * asset ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * city
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Province
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * nation
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * Address.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * latitude
                     */
                    std::string m_latitude;
                    bool m_latitudeHasBeenSet;

                    /**
                     * longitude
                     */
                    std::string m_longitude;
                    bool m_longitudeHasBeenSet;

                    /**
                     * Information.
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * Domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Enterprise Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Account
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * Family Group
                     */
                    std::string m_family;
                    bool m_familyHasBeenSet;

                    /**
                     * Virus name
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * MD5 Value
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * Malicious process filename
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 1-Host Assets; 2-Domain Assets; 3-Network Assets
                     */
                    int64_t m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Information Fields of Source Log Analysis
                     */
                    std::vector<KeyValue> m_fromLogAnalysisData;
                    bool m_fromLogAnalysisDataHasBeenSet;

                    /**
                     * Container name
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * container ID
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ROLEINFO_H_
