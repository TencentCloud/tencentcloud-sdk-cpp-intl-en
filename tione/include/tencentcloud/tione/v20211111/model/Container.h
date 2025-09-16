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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CONTAINER_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CONTAINER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ContainerStatus.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Container information.
                */
                class Container : public AbstractModel
                {
                public:
                    Container();
                    ~Container() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Name.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Name.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerId id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containerId id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取Image address.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Image Image address.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置Image address.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _image Image address.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取Container status.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Container status.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ContainerStatus GetStatus() const;

                    /**
                     * 设置Container status.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Container status.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const ContainerStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Name.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * Image address.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * Container status.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ContainerStatus m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CONTAINER_H_
