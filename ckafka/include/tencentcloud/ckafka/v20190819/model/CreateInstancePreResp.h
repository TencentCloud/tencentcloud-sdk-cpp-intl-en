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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPRERESP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPRERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/CreateInstancePreData.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Data structure returned by monthly subscribed instance APIs
                */
                class CreateInstancePreResp : public AbstractModel
                {
                public:
                    CreateInstancePreResp();
                    ~CreateInstancePreResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Returned code. 0: Normal; other values: Error.
                     * @return ReturnCode Returned code. 0: Normal; other values: Error.
                     * 
                     */
                    std::string GetReturnCode() const;

                    /**
                     * 设置Returned code. 0: Normal; other values: Error.
                     * @param _returnCode Returned code. 0: Normal; other values: Error.
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
                     * 获取The message indicating whether the operation is successful.
                     * @return ReturnMessage The message indicating whether the operation is successful.
                     * 
                     */
                    std::string GetReturnMessage() const;

                    /**
                     * 设置The message indicating whether the operation is successful.
                     * @param _returnMessage The message indicating whether the operation is successful.
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
                     * 获取Specifies the Data returned by the operation.
                     * @return Data Specifies the Data returned by the operation.
                     * 
                     */
                    CreateInstancePreData GetData() const;

                    /**
                     * 设置Specifies the Data returned by the operation.
                     * @param _data Specifies the Data returned by the operation.
                     * 
                     */
                    void SetData(const CreateInstancePreData& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Deletion time.  This parameter has been deprecated and will be deleted.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeleteRouteTimestamp Deletion time.  This parameter has been deprecated and will be deleted.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetDeleteRouteTimestamp() const;

                    /**
                     * 设置Deletion time.  This parameter has been deprecated and will be deleted.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _deleteRouteTimestamp Deletion time.  This parameter has been deprecated and will be deleted.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetDeleteRouteTimestamp(const std::string& _deleteRouteTimestamp);

                    /**
                     * 判断参数 DeleteRouteTimestamp 是否已赋值
                     * @return DeleteRouteTimestamp 是否已赋值
                     * @deprecated
                     */
                    bool DeleteRouteTimestampHasBeenSet() const;

                private:

                    /**
                     * Returned code. 0: Normal; other values: Error.
                     */
                    std::string m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * The message indicating whether the operation is successful.
                     */
                    std::string m_returnMessage;
                    bool m_returnMessageHasBeenSet;

                    /**
                     * Specifies the Data returned by the operation.
                     */
                    CreateInstancePreData m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Deletion time.  This parameter has been deprecated and will be deleted.  Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_deleteRouteTimestamp;
                    bool m_deleteRouteTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPRERESP_H_
