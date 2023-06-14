/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAINACCESSREGIONDICT_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAINACCESSREGIONDICT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/NationCountryInnerInfo.h>
#include <tencentcloud/gaap/v20180529/model/ProxyIdDict.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * Nearest access configuration details of domain name resolution
                */
                class DomainAccessRegionDict : public AbstractModel
                {
                public:
                    DomainAccessRegionDict();
                    ~DomainAccessRegionDict() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Nearest access region
                     * @return NationCountryInnerList Nearest access region
                     * 
                     */
                    std::vector<NationCountryInnerInfo> GetNationCountryInnerList() const;

                    /**
                     * 设置Nearest access region
                     * @param _nationCountryInnerList Nearest access region
                     * 
                     */
                    void SetNationCountryInnerList(const std::vector<NationCountryInnerInfo>& _nationCountryInnerList);

                    /**
                     * 判断参数 NationCountryInnerList 是否已赋值
                     * @return NationCountryInnerList 是否已赋值
                     * 
                     */
                    bool NationCountryInnerListHasBeenSet() const;

                    /**
                     * 获取Acceleration region connection list
                     * @return ProxyList Acceleration region connection list
                     * 
                     */
                    std::vector<ProxyIdDict> GetProxyList() const;

                    /**
                     * 设置Acceleration region connection list
                     * @param _proxyList Acceleration region connection list
                     * 
                     */
                    void SetProxyList(const std::vector<ProxyIdDict>& _proxyList);

                    /**
                     * 判断参数 ProxyList 是否已赋值
                     * @return ProxyList 是否已赋值
                     * 
                     */
                    bool ProxyListHasBeenSet() const;

                    /**
                     * 获取Acceleration region ID
                     * @return RegionId Acceleration region ID
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Acceleration region ID
                     * @param _regionId Acceleration region ID
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Acceleration region internal code
                     * @return GeographicalZoneInnerCode Acceleration region internal code
                     * 
                     */
                    std::string GetGeographicalZoneInnerCode() const;

                    /**
                     * 设置Acceleration region internal code
                     * @param _geographicalZoneInnerCode Acceleration region internal code
                     * 
                     */
                    void SetGeographicalZoneInnerCode(const std::string& _geographicalZoneInnerCode);

                    /**
                     * 判断参数 GeographicalZoneInnerCode 是否已赋值
                     * @return GeographicalZoneInnerCode 是否已赋值
                     * 
                     */
                    bool GeographicalZoneInnerCodeHasBeenSet() const;

                    /**
                     * 获取Internal code of the continent to which the acceleration region belongs
                     * @return ContinentInnerCode Internal code of the continent to which the acceleration region belongs
                     * 
                     */
                    std::string GetContinentInnerCode() const;

                    /**
                     * 设置Internal code of the continent to which the acceleration region belongs
                     * @param _continentInnerCode Internal code of the continent to which the acceleration region belongs
                     * 
                     */
                    void SetContinentInnerCode(const std::string& _continentInnerCode);

                    /**
                     * 判断参数 ContinentInnerCode 是否已赋值
                     * @return ContinentInnerCode 是否已赋值
                     * 
                     */
                    bool ContinentInnerCodeHasBeenSet() const;

                    /**
                     * 获取Acceleration region alias
                     * @return RegionName Acceleration region alias
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Acceleration region alias
                     * @param _regionName Acceleration region alias
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                private:

                    /**
                     * Nearest access region
                     */
                    std::vector<NationCountryInnerInfo> m_nationCountryInnerList;
                    bool m_nationCountryInnerListHasBeenSet;

                    /**
                     * Acceleration region connection list
                     */
                    std::vector<ProxyIdDict> m_proxyList;
                    bool m_proxyListHasBeenSet;

                    /**
                     * Acceleration region ID
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Acceleration region internal code
                     */
                    std::string m_geographicalZoneInnerCode;
                    bool m_geographicalZoneInnerCodeHasBeenSet;

                    /**
                     * Internal code of the continent to which the acceleration region belongs
                     */
                    std::string m_continentInnerCode;
                    bool m_continentInnerCodeHasBeenSet;

                    /**
                     * Acceleration region alias
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DOMAINACCESSREGIONDICT_H_
