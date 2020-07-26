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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_SCHEDULINGDOMAIN_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_SCHEDULINGDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Scheduling domain name information
                */
                class SchedulingDomain : public AbstractModel
                {
                public:
                    SchedulingDomain();
                    ~SchedulingDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scheduling domain name
                     * @return Domain Scheduling domain name
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Scheduling domain name
                     * @param Domain Scheduling domain name
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取List of BGP IPs
                     * @return BGPIpList List of BGP IPs
                     */
                    std::vector<std::string> GetBGPIpList() const;

                    /**
                     * 设置List of BGP IPs
                     * @param BGPIpList List of BGP IPs
                     */
                    void SetBGPIpList(const std::vector<std::string>& _bGPIpList);

                    /**
                     * 判断参数 BGPIpList 是否已赋值
                     * @return BGPIpList 是否已赋值
                     */
                    bool BGPIpListHasBeenSet() const;

                    /**
                     * 获取List of CTCC IPs
                     * @return CTCCIpList List of CTCC IPs
                     */
                    std::vector<std::string> GetCTCCIpList() const;

                    /**
                     * 设置List of CTCC IPs
                     * @param CTCCIpList List of CTCC IPs
                     */
                    void SetCTCCIpList(const std::vector<std::string>& _cTCCIpList);

                    /**
                     * 判断参数 CTCCIpList 是否已赋值
                     * @return CTCCIpList 是否已赋值
                     */
                    bool CTCCIpListHasBeenSet() const;

                    /**
                     * 获取List of CUCC IPs
                     * @return CUCCIpList List of CUCC IPs
                     */
                    std::vector<std::string> GetCUCCIpList() const;

                    /**
                     * 设置List of CUCC IPs
                     * @param CUCCIpList List of CUCC IPs
                     */
                    void SetCUCCIpList(const std::vector<std::string>& _cUCCIpList);

                    /**
                     * 判断参数 CUCCIpList 是否已赋值
                     * @return CUCCIpList 是否已赋值
                     */
                    bool CUCCIpListHasBeenSet() const;

                    /**
                     * 获取List of CMCC IPs
                     * @return CMCCIpList List of CMCC IPs
                     */
                    std::vector<std::string> GetCMCCIpList() const;

                    /**
                     * 设置List of CMCC IPs
                     * @param CMCCIpList List of CMCC IPs
                     */
                    void SetCMCCIpList(const std::vector<std::string>& _cMCCIpList);

                    /**
                     * 判断参数 CMCCIpList 是否已赋值
                     * @return CMCCIpList 是否已赋值
                     */
                    bool CMCCIpListHasBeenSet() const;

                    /**
                     * 获取List of IPs outside Mainland China
                     * @return OverseaIpList List of IPs outside Mainland China
                     */
                    std::vector<std::string> GetOverseaIpList() const;

                    /**
                     * 设置List of IPs outside Mainland China
                     * @param OverseaIpList List of IPs outside Mainland China
                     */
                    void SetOverseaIpList(const std::vector<std::string>& _overseaIpList);

                    /**
                     * 判断参数 OverseaIpList 是否已赋值
                     * @return OverseaIpList 是否已赋值
                     */
                    bool OverseaIpListHasBeenSet() const;

                    /**
                     * 获取Scheduling method. It only supports `priority` now.
                     * @return Method Scheduling method. It only supports `priority` now.
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Scheduling method. It only supports `priority` now.
                     * @param Method Scheduling method. It only supports `priority` now.
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取The creation time.
                     * @return CreateTime The creation time.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time.
                     * @param CreateTime The creation time.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return TTL 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置
                     * @param TTL 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status
                     * @param Status Status
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return ModifyTime Modification time
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time
                     * @param ModifyTime Modification time
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Scheduling domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * List of BGP IPs
                     */
                    std::vector<std::string> m_bGPIpList;
                    bool m_bGPIpListHasBeenSet;

                    /**
                     * List of CTCC IPs
                     */
                    std::vector<std::string> m_cTCCIpList;
                    bool m_cTCCIpListHasBeenSet;

                    /**
                     * List of CUCC IPs
                     */
                    std::vector<std::string> m_cUCCIpList;
                    bool m_cUCCIpListHasBeenSet;

                    /**
                     * List of CMCC IPs
                     */
                    std::vector<std::string> m_cMCCIpList;
                    bool m_cMCCIpListHasBeenSet;

                    /**
                     * List of IPs outside Mainland China
                     */
                    std::vector<std::string> m_overseaIpList;
                    bool m_overseaIpListHasBeenSet;

                    /**
                     * Scheduling method. It only supports `priority` now.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * The creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * Status
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_SCHEDULINGDOMAIN_H_
