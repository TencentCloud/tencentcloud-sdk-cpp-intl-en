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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IPINTELINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IPINTELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DomainInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * IP threat intelligence information (obtained through the TIX IPAnalysis API)
                */
                class IPIntelInfo : public AbstractModel
                {
                public:
                    IPIntelInfo();
                    ~IPIntelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Intelligence tag (such as Common Trojan, vulnerability software, Stealer Trojan)</p>
                     * @return Tags <p>Intelligence tag (such as Common Trojan, vulnerability software, Stealer Trojan)</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>Intelligence tag (such as Common Trojan, vulnerability software, Stealer Trojan)</p>
                     * @param _tags <p>Intelligence tag (such as Common Trojan, vulnerability software, Stealer Trojan)</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Analysis basis</p>
                     * @return Basis <p>Analysis basis</p>
                     * 
                     */
                    std::string GetBasis() const;

                    /**
                     * 设置<p>Analysis basis</p>
                     * @param _basis <p>Analysis basis</p>
                     * 
                     */
                    void SetBasis(const std::string& _basis);

                    /**
                     * 判断参数 Basis 是否已赋值
                     * @return Basis 是否已赋值
                     * 
                     */
                    bool BasisHasBeenSet() const;

                    /**
                     * 获取<p>Associated operator</p>
                     * @return ISP <p>Associated operator</p>
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置<p>Associated operator</p>
                     * @param _iSP <p>Associated operator</p>
                     * 
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取<p>Location</p>
                     * @return Location <p>Location</p>
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置<p>Location</p>
                     * @param _location <p>Location</p>
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取<p>Family gang</p>
                     * @return Characteristic <p>Family gang</p>
                     * 
                     */
                    std::string GetCharacteristic() const;

                    /**
                     * 设置<p>Family gang</p>
                     * @param _characteristic <p>Family gang</p>
                     * 
                     */
                    void SetCharacteristic(const std::string& _characteristic);

                    /**
                     * 判断参数 Characteristic 是否已赋值
                     * @return Characteristic 是否已赋值
                     * 
                     */
                    bool CharacteristicHasBeenSet() const;

                    /**
                     * 获取<p>IP profiling</p>
                     * @return Purpose <p>IP profiling</p>
                     * 
                     */
                    std::string GetPurpose() const;

                    /**
                     * 设置<p>IP profiling</p>
                     * @param _purpose <p>IP profiling</p>
                     * 
                     */
                    void SetPurpose(const std::string& _purpose);

                    /**
                     * 判断参数 Purpose 是否已赋值
                     * @return Purpose 是否已赋值
                     * 
                     */
                    bool PurposeHasBeenSet() const;

                    /**
                     * 获取<p>Reverse-check domain name list</p>
                     * @return Referer <p>Reverse-check domain name list</p>
                     * 
                     */
                    std::vector<DomainInfo> GetReferer() const;

                    /**
                     * 设置<p>Reverse-check domain name list</p>
                     * @param _referer <p>Reverse-check domain name list</p>
                     * 
                     */
                    void SetReferer(const std::vector<DomainInfo>& _referer);

                    /**
                     * 判断参数 Referer 是否已赋值
                     * @return Referer 是否已赋值
                     * 
                     */
                    bool RefererHasBeenSet() const;

                private:

                    /**
                     * <p>Intelligence tag (such as Common Trojan, vulnerability software, Stealer Trojan)</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Analysis basis</p>
                     */
                    std::string m_basis;
                    bool m_basisHasBeenSet;

                    /**
                     * <p>Associated operator</p>
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * <p>Location</p>
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * <p>Family gang</p>
                     */
                    std::string m_characteristic;
                    bool m_characteristicHasBeenSet;

                    /**
                     * <p>IP profiling</p>
                     */
                    std::string m_purpose;
                    bool m_purposeHasBeenSet;

                    /**
                     * <p>Reverse-check domain name list</p>
                     */
                    std::vector<DomainInfo> m_referer;
                    bool m_refererHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IPINTELINFO_H_
