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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_ATTRIBUTES_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_ATTRIBUTES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Sampling log attributes
                */
                class Attributes : public AbstractModel
                {
                public:
                    Attributes();
                    ~Attributes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Response status code.

Note: This field may return null, indicating that no valid value is found.
                     * @return Status Response status code.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Response status code.

Note: This field may return null, indicating that no valid value is found.
                     * @param _status Response status code.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Response result code.

Note: This field may return null, indicating that no valid value is found.
                     * @return Result Response result code.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置Response result code.

Note: This field may return null, indicating that no valid value is found.
                     * @param _result Response result code.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Request service.

Note: This field may return null, indicating that no valid value is found.
                     * @return Service Request service.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置Request service.

Note: This field may return null, indicating that no valid value is found.
                     * @param _service Request service.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取Request method.

Note: This field may return null, indicating that no valid value is found.
                     * @return Method Request method.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Request method.

Note: This field may return null, indicating that no valid value is found.
                     * @param _method Request method.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Request duration.

Note: This field may return null, indicating that no valid value is found.
                     * @return Duration Request duration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置Request duration.

Note: This field may return null, indicating that no valid value is found.
                     * @param _duration Request duration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * Response status code.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Response result code.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Request service.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * Request method.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Request duration.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_ATTRIBUTES_H_
