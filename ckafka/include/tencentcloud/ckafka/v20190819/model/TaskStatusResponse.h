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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Returned task status
                */
                class TaskStatusResponse : public AbstractModel
                {
                public:
                    TaskStatusResponse();
                    ~TaskStatusResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task status. `0` (Successful), `1` (Failed), `2` ( Running)
                     * @return Status Task status. `0` (Successful), `1` (Failed), `2` ( Running)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status. `0` (Successful), `1` (Failed), `2` ( Running)
                     * @param _status Task status. `0` (Successful), `1` (Failed), `2` ( Running)
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Output information Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Output Output information Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置Output information Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _output Output information Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * Task status. `0` (Successful), `1` (Failed), `2` ( Running)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Output information Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TASKSTATUSRESPONSE_H_
