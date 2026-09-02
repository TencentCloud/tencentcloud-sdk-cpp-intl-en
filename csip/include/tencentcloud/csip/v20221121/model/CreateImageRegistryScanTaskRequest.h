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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGEREGISTRYSCANTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGEREGISTRYSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ImageScanAssetTarget.h>
#include <tencentcloud/csip/v20221121/model/ImageScanRegistryFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateImageRegistryScanTask request structure.
                */
                class CreateImageRegistryScanTaskRequest : public AbstractModel
                {
                public:
                    CreateImageRegistryScanTaskRequest();
                    ~CreateImageRegistryScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Scan type</p><p>Enumeration value:</p><ul><li>VUL: Vulnerability</li><li>VIRUS: Trojan</li><li>RISK: Sensitive information</li></ul>
                     * @return ScanType <p>Scan type</p><p>Enumeration value:</p><ul><li>VUL: Vulnerability</li><li>VIRUS: Trojan</li><li>RISK: Sensitive information</li></ul>
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置<p>Scan type</p><p>Enumeration value:</p><ul><li>VUL: Vulnerability</li><li>VIRUS: Trojan</li><li>RISK: Sensitive information</li></ul>
                     * @param _scanType <p>Scan type</p><p>Enumeration value:</p><ul><li>VUL: Vulnerability</li><li>VIRUS: Trojan</li><li>RISK: Sensitive information</li></ul>
                     * 
                     */
                    void SetScanType(const std::vector<std::string>& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取<p>Timeout period, in seconds</p>
                     * @return Timeout <p>Timeout period, in seconds</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>Timeout period, in seconds</p>
                     * @param _timeout <p>Timeout period, in seconds</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Task name</p>
                     * @return Name <p>Task name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Task name</p>
                     * @param _name <p>Task name</p>
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
                     * 获取<p>Filtering configuration of scanning target mirrors</p>
                     * @return Target <p>Filtering configuration of scanning target mirrors</p>
                     * 
                     */
                    ImageScanAssetTarget GetTarget() const;

                    /**
                     * 设置<p>Filtering configuration of scanning target mirrors</p>
                     * @param _target <p>Filtering configuration of scanning target mirrors</p>
                     * 
                     */
                    void SetTarget(const ImageScanAssetTarget& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>Mirror filter configuration</p>
                     * @return Filter <p>Mirror filter configuration</p>
                     * 
                     */
                    ImageScanRegistryFilter GetFilter() const;

                    /**
                     * 设置<p>Mirror filter configuration</p>
                     * @param _filter <p>Mirror filter configuration</p>
                     * 
                     */
                    void SetFilter(const ImageScanRegistryFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Scan type</p><p>Enumeration value:</p><ul><li>VUL: Vulnerability</li><li>VIRUS: Trojan</li><li>RISK: Sensitive information</li></ul>
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>Timeout period, in seconds</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Task name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Filtering configuration of scanning target mirrors</p>
                     */
                    ImageScanAssetTarget m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>Mirror filter configuration</p>
                     */
                    ImageScanRegistryFilter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGEREGISTRYSCANTASKREQUEST_H_
