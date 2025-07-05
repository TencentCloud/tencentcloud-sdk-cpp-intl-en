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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DELETELAUNCHTEMPLATEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DELETELAUNCHTEMPLATEREQUEST_H_

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
                * DeleteLaunchTemplate request structure.
                */
                class DeleteLaunchTemplateRequest : public AbstractModel
                {
                public:
                    DeleteLaunchTemplateRequest();
                    ~DeleteLaunchTemplateRequest() = default;
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

                private:

                    /**
                     * The launch template ID
                     */
                    std::string m_launchTemplateId;
                    bool m_launchTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DELETELAUNCHTEMPLATEREQUEST_H_
