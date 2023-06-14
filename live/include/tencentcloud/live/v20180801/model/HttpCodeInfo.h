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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPCODEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPCODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/HttpCodeValue.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * HTTP return code and statistics
                */
                class HttpCodeInfo : public AbstractModel
                {
                public:
                    HttpCodeInfo();
                    ~HttpCodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP return code.
Example: "2xx", "3xx", "4xx", "5xx".
                     * @return HttpCode HTTP return code.
Example: "2xx", "3xx", "4xx", "5xx".
                     * 
                     */
                    std::string GetHttpCode() const;

                    /**
                     * 设置HTTP return code.
Example: "2xx", "3xx", "4xx", "5xx".
                     * @param _httpCode HTTP return code.
Example: "2xx", "3xx", "4xx", "5xx".
                     * 
                     */
                    void SetHttpCode(const std::string& _httpCode);

                    /**
                     * 判断参数 HttpCode 是否已赋值
                     * @return HttpCode 是否已赋值
                     * 
                     */
                    bool HttpCodeHasBeenSet() const;

                    /**
                     * 获取Statistics. 0 will be added for points in time when there is no data.
                     * @return ValueList Statistics. 0 will be added for points in time when there is no data.
                     * 
                     */
                    std::vector<HttpCodeValue> GetValueList() const;

                    /**
                     * 设置Statistics. 0 will be added for points in time when there is no data.
                     * @param _valueList Statistics. 0 will be added for points in time when there is no data.
                     * 
                     */
                    void SetValueList(const std::vector<HttpCodeValue>& _valueList);

                    /**
                     * 判断参数 ValueList 是否已赋值
                     * @return ValueList 是否已赋值
                     * 
                     */
                    bool ValueListHasBeenSet() const;

                private:

                    /**
                     * HTTP return code.
Example: "2xx", "3xx", "4xx", "5xx".
                     */
                    std::string m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * Statistics. 0 will be added for points in time when there is no data.
                     */
                    std::vector<HttpCodeValue> m_valueList;
                    bool m_valueListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPCODEINFO_H_
