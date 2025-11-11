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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPOSTRESP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPOSTRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/CreateInstancePostData.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Data structure returned by pay-as-you-go instance APIs
                */
                class CreateInstancePostResp : public AbstractModel
                {
                public:
                    CreateInstancePostResp();
                    ~CreateInstancePostResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Returned code. `0` indicates normal status while other codes indicate errors.
                     * @return ReturnCode Returned code. `0` indicates normal status while other codes indicate errors.
                     * 
                     */
                    std::string GetReturnCode() const;

                    /**
                     * 设置Returned code. `0` indicates normal status while other codes indicate errors.
                     * @param _returnCode Returned code. `0` indicates normal status while other codes indicate errors.
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
                     * 获取Message returned by the API. An error message will be returned if the API reports an error. 
                     * @return ReturnMessage Message returned by the API. An error message will be returned if the API reports an error. 
                     * 
                     */
                    std::string GetReturnMessage() const;

                    /**
                     * 设置Message returned by the API. An error message will be returned if the API reports an error. 
                     * @param _returnMessage Message returned by the API. An error message will be returned if the API reports an error. 
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
                     * 获取Specifies the Data returned.
                     * @return Data Specifies the Data returned.
                     * 
                     */
                    CreateInstancePostData GetData() const;

                    /**
                     * 设置Specifies the Data returned.
                     * @param _data Specifies the Data returned.
                     * 
                     */
                    void SetData(const CreateInstancePostData& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Returned code. `0` indicates normal status while other codes indicate errors.
                     */
                    std::string m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * Message returned by the API. An error message will be returned if the API reports an error. 
                     */
                    std::string m_returnMessage;
                    bool m_returnMessageHasBeenSet;

                    /**
                     * Specifies the Data returned.
                     */
                    CreateInstancePostData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPOSTRESP_H_
