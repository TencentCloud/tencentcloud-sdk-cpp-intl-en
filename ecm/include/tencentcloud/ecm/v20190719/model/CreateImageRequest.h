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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CREATEIMAGEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CREATEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateImage request structure.
                */
                class CreateImageRequest : public AbstractModel
                {
                public:
                    CreateImageRequest();
                    ~CreateImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image name.
                     * @return ImageName Image name.
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name.
                     * @param ImageName Image name.
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取ID of the instance for which to make an image.
                     * @return InstanceId ID of the instance for which to make an image.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance for which to make an image.
                     * @param InstanceId ID of the instance for which to make an image.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Image description.
                     * @return ImageDescription Image description.
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置Image description.
                     * @param ImageDescription Image description.
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     */
                    bool ImageDescriptionHasBeenSet() const;

                    /**
                     * 获取Whether to perform a forced shutdown to make an image. Valid values:
TRUE: yes
FALSE: no
Default value: FALSE.
                     * @return ForcePoweroff Whether to perform a forced shutdown to make an image. Valid values:
TRUE: yes
FALSE: no
Default value: FALSE.
                     */
                    std::string GetForcePoweroff() const;

                    /**
                     * 设置Whether to perform a forced shutdown to make an image. Valid values:
TRUE: yes
FALSE: no
Default value: FALSE.
                     * @param ForcePoweroff Whether to perform a forced shutdown to make an image. Valid values:
TRUE: yes
FALSE: no
Default value: FALSE.
                     */
                    void SetForcePoweroff(const std::string& _forcePoweroff);

                    /**
                     * 判断参数 ForcePoweroff 是否已赋值
                     * @return ForcePoweroff 是否已赋值
                     */
                    bool ForcePoweroffHasBeenSet() const;

                private:

                    /**
                     * Image name.
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * ID of the instance for which to make an image.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Image description.
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * Whether to perform a forced shutdown to make an image. Valid values:
TRUE: yes
FALSE: no
Default value: FALSE.
                     */
                    std::string m_forcePoweroff;
                    bool m_forcePoweroffHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CREATEIMAGEREQUEST_H_
