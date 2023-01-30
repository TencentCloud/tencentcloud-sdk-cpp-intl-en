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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPEWHITELISTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPEWHITELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Escape allowlist
                */
                class EscapeWhiteListInfo : public AbstractModel
                {
                public:
                    EscapeWhiteListInfo();
                    ~EscapeWhiteListInfo() = default;
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
                     * 获取Allowed item ID
                     * @return ID Allowed item ID
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Allowed item ID
                     * @param ID Allowed item ID
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

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
                     * 获取Allowed event type
                     * @return EventType Allowed event type
                     */
                    std::vector<std::string> GetEventType() const;

                    /**
                     * 设置Allowed event type
                     * @param EventType Allowed event type
                     */
                    void SetEventType(const std::vector<std::string>& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return InsertTime Creation time
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置Creation time
                     * @param InsertTime Creation time
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param UpdateTime Update time
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Image size
                     * @return ImageSize Image size
                     */
                    int64_t GetImageSize() const;

                    /**
                     * 设置Image size
                     * @param ImageSize Image size
                     */
                    void SetImageSize(const int64_t& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     */
                    bool ImageSizeHasBeenSet() const;

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
                     * Allowed item ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

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
                     * Allowed event type
                     */
                    std::vector<std::string> m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Image size
                     */
                    int64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPEWHITELISTINFO_H_
