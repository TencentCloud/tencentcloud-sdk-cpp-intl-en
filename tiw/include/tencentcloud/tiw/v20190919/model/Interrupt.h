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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_INTERRUPT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_INTERRUPT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Number of video stream interruptions during real-time recording.
                */
                class Interrupt : public AbstractModel
                {
                public:
                    Interrupt();
                    ~Interrupt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return UserId User ID.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @param UserId User ID.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Number of video stream interruptions.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return Count Number of video stream interruptions.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of video stream interruptions.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @param Count Number of video stream interruptions.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * User ID.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Number of video stream interruptions.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_INTERRUPT_H_
