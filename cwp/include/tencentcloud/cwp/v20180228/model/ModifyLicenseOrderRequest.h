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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLICENSEORDERREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLICENSEORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyLicenseOrder request structure.
                */
                class ModifyLicenseOrderRequest : public AbstractModel
                {
                public:
                    ModifyLicenseOrderRequest();
                    ~ModifyLicenseOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceId Resource ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Expected value. If the current value is 10, fill in a larger value for scale-out, a smaller value for scale-down (the expected value must be no less than the usage value during scale-down), or the same value for no change.
                     * @return InquireNum Expected value. If the current value is 10, fill in a larger value for scale-out, a smaller value for scale-down (the expected value must be no less than the usage value during scale-down), or the same value for no change.
                     * 
                     */
                    uint64_t GetInquireNum() const;

                    /**
                     * 设置Expected value. If the current value is 10, fill in a larger value for scale-out, a smaller value for scale-down (the expected value must be no less than the usage value during scale-down), or the same value for no change.
                     * @param _inquireNum Expected value. If the current value is 10, fill in a larger value for scale-out, a smaller value for scale-down (the expected value must be no less than the usage value during scale-down), or the same value for no change.
                     * 
                     */
                    void SetInquireNum(const uint64_t& _inquireNum);

                    /**
                     * 判断参数 InquireNum 是否已赋值
                     * @return InquireNum 是否已赋值
                     * 
                     */
                    bool InquireNumHasBeenSet() const;

                    /**
                     * 获取Project ID. Fill in the original value for no change.
                     * @return ProjectId Project ID. Fill in the original value for no change.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID. Fill in the original value for no change.
                     * @param _projectId Project ID. Fill in the original value for no change.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Resource alias. Fill in the original value for no change.
                     * @return Alias Resource alias. Fill in the original value for no change.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Resource alias. Fill in the original value for no change.
                     * @param _alias Resource alias. Fill in the original value for no change.
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                private:

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Expected value. If the current value is 10, fill in a larger value for scale-out, a smaller value for scale-down (the expected value must be no less than the usage value during scale-down), or the same value for no change.
                     */
                    uint64_t m_inquireNum;
                    bool m_inquireNumHasBeenSet;

                    /**
                     * Project ID. Fill in the original value for no change.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Resource alias. Fill in the original value for no change.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLICENSEORDERREQUEST_H_
