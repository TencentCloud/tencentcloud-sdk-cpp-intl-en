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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPAUDITLISTAPPINFORESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPAUDITLISTAPPINFORESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Superapp approval information
                */
                class DescribeMNPAuditListAppInfoResp : public AbstractModel
                {
                public:
                    DescribeMNPAuditListAppInfoResp();
                    ~DescribeMNPAuditListAppInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Superapp ID.</p>
                     * @return ApplicationId <p>Superapp ID.</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>Superapp ID.</p>
                     * @param _applicationId <p>Superapp ID.</p>
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取<p>Superapp icon</p>
                     * @return ApplicationIcon <p>Superapp icon</p>
                     * 
                     */
                    std::string GetApplicationIcon() const;

                    /**
                     * 设置<p>Superapp icon</p>
                     * @param _applicationIcon <p>Superapp icon</p>
                     * 
                     */
                    void SetApplicationIcon(const std::string& _applicationIcon);

                    /**
                     * 判断参数 ApplicationIcon 是否已赋值
                     * @return ApplicationIcon 是否已赋值
                     * 
                     */
                    bool ApplicationIconHasBeenSet() const;

                    /**
                     * 获取<p>Superapp name.</p>
                     * @return ApplicationName <p>Superapp name.</p>
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>Superapp name.</p>
                     * @param _applicationName <p>Superapp name.</p>
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                private:

                    /**
                     * <p>Superapp ID.</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>Superapp icon</p>
                     */
                    std::string m_applicationIcon;
                    bool m_applicationIconHasBeenSet;

                    /**
                     * <p>Superapp name.</p>
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPAUDITLISTAPPINFORESP_H_
