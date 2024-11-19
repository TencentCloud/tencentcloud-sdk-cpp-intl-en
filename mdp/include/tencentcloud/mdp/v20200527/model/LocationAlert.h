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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_LOCATIONALERT_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_LOCATIONALERT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Channel Linear Assembly Location Alarm Information.
                */
                class LocationAlert : public AbstractModel
                {
                public:
                    LocationAlert();
                    ~LocationAlert() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Location ID.
                     * @return LocationId Location ID.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Location ID.
                     * @param _locationId Location ID.
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取Alarm event code.
                     * @return Code Alarm event code.
                     * 
                     */
                    uint64_t GetCode() const;

                    /**
                     * 设置Alarm event code.
                     * @param _code Alarm event code.
                     * 
                     */
                    void SetCode(const uint64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Alarm classification.
                     * @return Category Alarm classification.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Alarm classification.
                     * @param _category Alarm classification.
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Alarm message.
                     * @return Message Alarm message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Alarm message.
                     * @param _message Alarm message.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return LastModifiedTime Update time.
                     * 
                     */
                    uint64_t GetLastModifiedTime() const;

                    /**
                     * 设置Update time.
                     * @param _lastModifiedTime Update time.
                     * 
                     */
                    void SetLastModifiedTime(const uint64_t& _lastModifiedTime);

                    /**
                     * 判断参数 LastModifiedTime 是否已赋值
                     * @return LastModifiedTime 是否已赋值
                     * 
                     */
                    bool LastModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Location name.
                     * @return LocationName Location name.
                     * 
                     */
                    std::string GetLocationName() const;

                    /**
                     * 设置Location name.
                     * @param _locationName Location name.
                     * 
                     */
                    void SetLocationName(const std::string& _locationName);

                    /**
                     * 判断参数 LocationName 是否已赋值
                     * @return LocationName 是否已赋值
                     * 
                     */
                    bool LocationNameHasBeenSet() const;

                private:

                    /**
                     * Location ID.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Alarm event code.
                     */
                    uint64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Alarm classification.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Alarm message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Update time.
                     */
                    uint64_t m_lastModifiedTime;
                    bool m_lastModifiedTimeHasBeenSet;

                    /**
                     * Location name.
                     */
                    std::string m_locationName;
                    bool m_locationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_LOCATIONALERT_H_
