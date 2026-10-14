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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CONVERSATIONAPPARTIFACT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CONVERSATIONAPPARTIFACT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 
                */
                class ConversationAppArtifact : public AbstractModel
                {
                public:
                    ConversationAppArtifact();
                    ~ConversationAppArtifact() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return AppAvatar 
                     * 
                     */
                    std::string GetAppAvatar() const;

                    /**
                     * 设置
                     * @param _appAvatar 
                     * 
                     */
                    void SetAppAvatar(const std::string& _appAvatar);

                    /**
                     * 判断参数 AppAvatar 是否已赋值
                     * @return AppAvatar 是否已赋值
                     * 
                     */
                    bool AppAvatarHasBeenSet() const;

                    /**
                     * 获取
                     * @return AppId 
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置
                     * @param _appId 
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return AppPattern 
                     * 
                     */
                    int64_t GetAppPattern() const;

                    /**
                     * 设置
                     * @param _appPattern 
                     * 
                     */
                    void SetAppPattern(const int64_t& _appPattern);

                    /**
                     * 判断参数 AppPattern 是否已赋值
                     * @return AppPattern 是否已赋值
                     * 
                     */
                    bool AppPatternHasBeenSet() const;

                    /**
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
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
                     * 获取
                     * @return SpaceId 
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置
                     * @param _spaceId 
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_appAvatar;
                    bool m_appAvatarHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_appPattern;
                    bool m_appPatternHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CONVERSATIONAPPARTIFACT_H_
