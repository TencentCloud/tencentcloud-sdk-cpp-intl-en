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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDIMAGEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/VulAffectedImageComponentInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Information of the image affected by the vulnerability
                */
                class VulAffectedImageInfo : public AbstractModel
                {
                public:
                    VulAffectedImageInfo();
                    ~VulAffectedImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image ID
                     * @return ImageID Image ID
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置Image ID
                     * @param ImageID Image ID
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取Image name
                     * @return ImageName Image name
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
                     * @param ImageName Image name
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Number of associated servers
                     * @return HostCount Number of associated servers
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置Number of associated servers
                     * @param HostCount Number of associated servers
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取Number of associated containers
                     * @return ContainerCount Number of associated containers
                     */
                    int64_t GetContainerCount() const;

                    /**
                     * 设置Number of associated containers
                     * @param ContainerCount Number of associated containers
                     */
                    void SetContainerCount(const int64_t& _containerCount);

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取List of components
                     * @return ComponentList List of components
                     */
                    std::vector<VulAffectedImageComponentInfo> GetComponentList() const;

                    /**
                     * 设置List of components
                     * @param ComponentList List of components
                     */
                    void SetComponentList(const std::vector<VulAffectedImageComponentInfo>& _componentList);

                    /**
                     * 判断参数 ComponentList 是否已赋值
                     * @return ComponentList 是否已赋值
                     */
                    bool ComponentListHasBeenSet() const;

                private:

                    /**
                     * Image ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Number of associated servers
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * Number of associated containers
                     */
                    int64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * List of components
                     */
                    std::vector<VulAffectedImageComponentInfo> m_componentList;
                    bool m_componentListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULAFFECTEDIMAGEINFO_H_
