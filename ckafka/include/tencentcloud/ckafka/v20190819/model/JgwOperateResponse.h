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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_JGWOPERATERESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_JGWOPERATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/OperateResponseData.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Returned result value of operation
                */
                class JgwOperateResponse : public AbstractModel
                {
                public:
                    JgwOperateResponse();
                    ~JgwOperateResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Returned code. 0 as normal, non-0 as error.</p>
                     * @return ReturnCode <p>Returned code. 0 as normal, non-0 as error.</p>
                     * 
                     */
                    std::string GetReturnCode() const;

                    /**
                     * 设置<p>Returned code. 0 as normal, non-0 as error.</p>
                     * @param _returnCode <p>Returned code. 0 as normal, non-0 as error.</p>
                     * 
                     */
                    void SetReturnCode(const std::string& _returnCode);

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取<p>Success message</p>
                     * @return ReturnMessage <p>Success message</p>
                     * 
                     */
                    std::string GetReturnMessage() const;

                    /**
                     * 设置<p>Success message</p>
                     * @param _returnMessage <p>Success message</p>
                     * 
                     */
                    void SetReturnMessage(const std::string& _returnMessage);

                    /**
                     * 判断参数 ReturnMessage 是否已赋值
                     * @return ReturnMessage 是否已赋值
                     * 
                     */
                    bool ReturnMessageHasBeenSet() const;

                    /**
                     * 获取<p>The Data returned by the operation may include flowId.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data <p>The Data returned by the operation may include flowId.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    OperateResponseData GetData() const;

                    /**
                     * 设置<p>The Data returned by the operation may include flowId.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _data <p>The Data returned by the operation may include flowId.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetData(const OperateResponseData& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * <p>Returned code. 0 as normal, non-0 as error.</p>
                     */
                    std::string m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * <p>Success message</p>
                     */
                    std::string m_returnMessage;
                    bool m_returnMessageHasBeenSet;

                    /**
                     * <p>The Data returned by the operation may include flowId.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    OperateResponseData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_JGWOPERATERESPONSE_H_
