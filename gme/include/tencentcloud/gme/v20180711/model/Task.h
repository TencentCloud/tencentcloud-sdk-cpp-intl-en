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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_TASK_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * Voice detection task list
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique data ID
                     * @return DataId Unique data ID
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置Unique data ID
                     * @param DataId Unique data ID
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取URL-encoded data file URL, which is a pull address if the detected voice is a stream.
                     * @return Url URL-encoded data file URL, which is a pull address if the detected voice is a stream.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL-encoded data file URL, which is a pull address if the detected voice is a stream.
                     * @param Url URL-encoded data file URL, which is a pull address if the detected voice is a stream.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取GME Voice Chat room ID, which is entered during voice analysis by GME Voice Chat.
                     * @return RoomId GME Voice Chat room ID, which is entered during voice analysis by GME Voice Chat.
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置GME Voice Chat room ID, which is entered during voice analysis by GME Voice Chat.
                     * @param RoomId GME Voice Chat room ID, which is entered during voice analysis by GME Voice Chat.
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取GME Voice Chat user ID, which is entered during voice analysis by GME Voice Chat.
                     * @return OpenId GME Voice Chat user ID, which is entered during voice analysis by GME Voice Chat.
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置GME Voice Chat user ID, which is entered during voice analysis by GME Voice Chat.
                     * @param OpenId GME Voice Chat user ID, which is entered during voice analysis by GME Voice Chat.
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     */
                    bool OpenIdHasBeenSet() const;

                private:

                    /**
                     * Unique data ID
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * URL-encoded data file URL, which is a pull address if the detected voice is a stream.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * GME Voice Chat room ID, which is entered during voice analysis by GME Voice Chat.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * GME Voice Chat user ID, which is entered during voice analysis by GME Voice Chat.
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_TASK_H_
