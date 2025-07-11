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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPSTATUSINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Playback error code information
                */
                class HttpStatusInfo : public AbstractModel
                {
                public:
                    HttpStatusInfo();
                    ~HttpStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Playback HTTP status code.
                     * @return HttpStatus Playback HTTP status code.
                     * 
                     */
                    std::string GetHttpStatus() const;

                    /**
                     * 设置Playback HTTP status code.
                     * @param _httpStatus Playback HTTP status code.
                     * 
                     */
                    void SetHttpStatus(const std::string& _httpStatus);

                    /**
                     * 判断参数 HttpStatus 是否已赋值
                     * @return HttpStatus 是否已赋值
                     * 
                     */
                    bool HttpStatusHasBeenSet() const;

                    /**
                     * 获取Quantity.
                     * @return Num Quantity.
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 设置Quantity.
                     * @param _num Quantity.
                     * 
                     */
                    void SetNum(const uint64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                private:

                    /**
                     * Playback HTTP status code.
                     */
                    std::string m_httpStatus;
                    bool m_httpStatusHasBeenSet;

                    /**
                     * Quantity.
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPSTATUSINFO_H_
