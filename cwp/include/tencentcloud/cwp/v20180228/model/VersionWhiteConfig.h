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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VERSIONWHITECONFIG_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VERSIONWHITECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Allowlist configuration of the authorized edition
                */
                class VersionWhiteConfig : public AbstractModel
                {
                public:
                    VersionWhiteConfig();
                    ~VersionWhiteConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of days before expiration
                     * @return Deadline Number of days before expiration
                     * 
                     */
                    uint64_t GetDeadline() const;

                    /**
                     * 设置Number of days before expiration
                     * @param _deadline Number of days before expiration
                     * 
                     */
                    void SetDeadline(const uint64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取Number of authorizations
                     * @return LicenseNum Number of authorizations
                     * 
                     */
                    uint64_t GetLicenseNum() const;

                    /**
                     * 设置Number of authorizations
                     * @param _licenseNum Number of authorizations
                     * 
                     */
                    void SetLicenseNum(const uint64_t& _licenseNum);

                    /**
                     * 判断参数 LicenseNum 是否已赋值
                     * @return LicenseNum 是否已赋值
                     * 
                     */
                    bool LicenseNumHasBeenSet() const;

                    /**
                     * 获取Whether application can be made
                     * @return IsApplyFor Whether application can be made
                     * 
                     */
                    bool GetIsApplyFor() const;

                    /**
                     * 设置Whether application can be made
                     * @param _isApplyFor Whether application can be made
                     * 
                     */
                    void SetIsApplyFor(const bool& _isApplyFor);

                    /**
                     * 判断参数 IsApplyFor 是否已赋值
                     * @return IsApplyFor 是否已赋值
                     * 
                     */
                    bool IsApplyForHasBeenSet() const;

                    /**
                     * 获取Type
                     * @return SourceType Type
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置Type
                     * @param _sourceType Type
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                private:

                    /**
                     * Number of days before expiration
                     */
                    uint64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * Number of authorizations
                     */
                    uint64_t m_licenseNum;
                    bool m_licenseNumHasBeenSet;

                    /**
                     * Whether application can be made
                     */
                    bool m_isApplyFor;
                    bool m_isApplyForHasBeenSet;

                    /**
                     * Type
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VERSIONWHITECONFIG_H_
