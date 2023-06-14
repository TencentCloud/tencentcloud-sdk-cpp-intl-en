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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeLaunchTemplateVersions request structure.
                */
                class DescribeLaunchTemplateVersionsRequest : public AbstractModel
                {
                public:
                    DescribeLaunchTemplateVersionsRequest();
                    ~DescribeLaunchTemplateVersionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The launch template ID
                     * @return LaunchTemplateId The launch template ID
                     * 
                     */
                    std::string GetLaunchTemplateId() const;

                    /**
                     * 设置The launch template ID
                     * @param _launchTemplateId The launch template ID
                     * 
                     */
                    void SetLaunchTemplateId(const std::string& _launchTemplateId);

                    /**
                     * 判断参数 LaunchTemplateId 是否已赋值
                     * @return LaunchTemplateId 是否已赋值
                     * 
                     */
                    bool LaunchTemplateIdHasBeenSet() const;

                    /**
                     * 获取List of instance launch templates.
                     * @return LaunchTemplateVersions List of instance launch templates.
                     * 
                     */
                    std::vector<uint64_t> GetLaunchTemplateVersions() const;

                    /**
                     * 设置List of instance launch templates.
                     * @param _launchTemplateVersions List of instance launch templates.
                     * 
                     */
                    void SetLaunchTemplateVersions(const std::vector<uint64_t>& _launchTemplateVersions);

                    /**
                     * 判断参数 LaunchTemplateVersions 是否已赋值
                     * @return LaunchTemplateVersions 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionsHasBeenSet() const;

                    /**
                     * 获取The minimum version number specified, which defaults to 0.
                     * @return MinVersion The minimum version number specified, which defaults to 0.
                     * 
                     */
                    uint64_t GetMinVersion() const;

                    /**
                     * 设置The minimum version number specified, which defaults to 0.
                     * @param _minVersion The minimum version number specified, which defaults to 0.
                     * 
                     */
                    void SetMinVersion(const uint64_t& _minVersion);

                    /**
                     * 判断参数 MinVersion 是否已赋值
                     * @return MinVersion 是否已赋值
                     * 
                     */
                    bool MinVersionHasBeenSet() const;

                    /**
                     * 获取The maximum version number specified, which defaults to 30.
                     * @return MaxVersion The maximum version number specified, which defaults to 30.
                     * 
                     */
                    uint64_t GetMaxVersion() const;

                    /**
                     * 设置The maximum version number specified, which defaults to 30.
                     * @param _maxVersion The maximum version number specified, which defaults to 30.
                     * 
                     */
                    void SetMaxVersion(const uint64_t& _maxVersion);

                    /**
                     * 判断参数 MaxVersion 是否已赋值
                     * @return MaxVersion 是否已赋值
                     * 
                     */
                    bool MaxVersionHasBeenSet() const;

                    /**
                     * 获取The offset. Default value: 0. For more information on `Offset`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Offset The offset. Default value: 0. For more information on `Offset`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The offset. Default value: 0. For more information on `Offset`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _offset The offset. Default value: 0. For more information on `Offset`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Limit The number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _limit The number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Specify whether to query the default version. This parameter and `LaunchTemplateVersions` cannot be specified at the same time.
                     * @return DefaultVersion Specify whether to query the default version. This parameter and `LaunchTemplateVersions` cannot be specified at the same time.
                     * 
                     */
                    bool GetDefaultVersion() const;

                    /**
                     * 设置Specify whether to query the default version. This parameter and `LaunchTemplateVersions` cannot be specified at the same time.
                     * @param _defaultVersion Specify whether to query the default version. This parameter and `LaunchTemplateVersions` cannot be specified at the same time.
                     * 
                     */
                    void SetDefaultVersion(const bool& _defaultVersion);

                    /**
                     * 判断参数 DefaultVersion 是否已赋值
                     * @return DefaultVersion 是否已赋值
                     * 
                     */
                    bool DefaultVersionHasBeenSet() const;

                private:

                    /**
                     * The launch template ID
                     */
                    std::string m_launchTemplateId;
                    bool m_launchTemplateIdHasBeenSet;

                    /**
                     * List of instance launch templates.
                     */
                    std::vector<uint64_t> m_launchTemplateVersions;
                    bool m_launchTemplateVersionsHasBeenSet;

                    /**
                     * The minimum version number specified, which defaults to 0.
                     */
                    uint64_t m_minVersion;
                    bool m_minVersionHasBeenSet;

                    /**
                     * The maximum version number specified, which defaults to 30.
                     */
                    uint64_t m_maxVersion;
                    bool m_maxVersionHasBeenSet;

                    /**
                     * The offset. Default value: 0. For more information on `Offset`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Specify whether to query the default version. This parameter and `LaunchTemplateVersions` cannot be specified at the same time.
                     */
                    bool m_defaultVersion;
                    bool m_defaultVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSREQUEST_H_
