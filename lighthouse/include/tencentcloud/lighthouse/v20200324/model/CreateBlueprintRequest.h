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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEBLUEPRINTREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEBLUEPRINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CreateBlueprint request structure.
                */
                class CreateBlueprintRequest : public AbstractModel
                {
                public:
                    CreateBlueprintRequest();
                    ~CreateBlueprintRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image name, which can contain up to 60 characters.
                     * @return BlueprintName Image name, which can contain up to 60 characters.
                     * 
                     */
                    std::string GetBlueprintName() const;

                    /**
                     * 设置Image name, which can contain up to 60 characters.
                     * @param _blueprintName Image name, which can contain up to 60 characters.
                     * 
                     */
                    void SetBlueprintName(const std::string& _blueprintName);

                    /**
                     * 判断参数 BlueprintName 是否已赋值
                     * @return BlueprintName 是否已赋值
                     * 
                     */
                    bool BlueprintNameHasBeenSet() const;

                    /**
                     * 获取Image description, which can contain up to 60 characters.
                     * @return Description Image description, which can contain up to 60 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Image description, which can contain up to 60 characters.
                     * @param _description Image description, which can contain up to 60 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取ID of the instance for which to make an image.
                     * @return InstanceId ID of the instance for which to make an image.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance for which to make an image.
                     * @param _instanceId ID of the instance for which to make an image.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Whether to forcibly shut down the instance before creating the image 
Valid values: 
`True`: Shut down and instance first 
`False`: Create the image when the instance is running 
Default: `True` 
Note that if you create an image when the instance is running, there might be data loss.
                     * @return ForcePowerOff Whether to forcibly shut down the instance before creating the image 
Valid values: 
`True`: Shut down and instance first 
`False`: Create the image when the instance is running 
Default: `True` 
Note that if you create an image when the instance is running, there might be data loss.
                     * 
                     */
                    bool GetForcePowerOff() const;

                    /**
                     * 设置Whether to forcibly shut down the instance before creating the image 
Valid values: 
`True`: Shut down and instance first 
`False`: Create the image when the instance is running 
Default: `True` 
Note that if you create an image when the instance is running, there might be data loss.
                     * @param _forcePowerOff Whether to forcibly shut down the instance before creating the image 
Valid values: 
`True`: Shut down and instance first 
`False`: Create the image when the instance is running 
Default: `True` 
Note that if you create an image when the instance is running, there might be data loss.
                     * 
                     */
                    void SetForcePowerOff(const bool& _forcePowerOff);

                    /**
                     * 判断参数 ForcePowerOff 是否已赋值
                     * @return ForcePowerOff 是否已赋值
                     * 
                     */
                    bool ForcePowerOffHasBeenSet() const;

                private:

                    /**
                     * Image name, which can contain up to 60 characters.
                     */
                    std::string m_blueprintName;
                    bool m_blueprintNameHasBeenSet;

                    /**
                     * Image description, which can contain up to 60 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * ID of the instance for which to make an image.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether to forcibly shut down the instance before creating the image 
Valid values: 
`True`: Shut down and instance first 
`False`: Create the image when the instance is running 
Default: `True` 
Note that if you create an image when the instance is running, there might be data loss.
                     */
                    bool m_forcePowerOff;
                    bool m_forcePowerOffHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEBLUEPRINTREQUEST_H_
