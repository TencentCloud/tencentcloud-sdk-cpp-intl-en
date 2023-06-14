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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_QUERYDISPATCHINPUTINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_QUERYDISPATCHINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/InputStreamInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * The stream status of the queried input.
                */
                class QueryDispatchInputInfo : public AbstractModel
                {
                public:
                    QueryDispatchInputInfo();
                    ~QueryDispatchInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The input ID.
                     * @return InputID The input ID.
                     * 
                     */
                    std::string GetInputID() const;

                    /**
                     * 设置The input ID.
                     * @param _inputID The input ID.
                     * 
                     */
                    void SetInputID(const std::string& _inputID);

                    /**
                     * 判断参数 InputID 是否已赋值
                     * @return InputID 是否已赋值
                     * 
                     */
                    bool InputIDHasBeenSet() const;

                    /**
                     * 获取The input name.
                     * @return InputName The input name.
                     * 
                     */
                    std::string GetInputName() const;

                    /**
                     * 设置The input name.
                     * @param _inputName The input name.
                     * 
                     */
                    void SetInputName(const std::string& _inputName);

                    /**
                     * 判断参数 InputName 是否已赋值
                     * @return InputName 是否已赋值
                     * 
                     */
                    bool InputNameHasBeenSet() const;

                    /**
                     * 获取The input protocol.
                     * @return Protocol The input protocol.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The input protocol.
                     * @param _protocol The input protocol.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取The stream status of the input.
                     * @return InputStreamInfoList The stream status of the input.
                     * 
                     */
                    std::vector<InputStreamInfo> GetInputStreamInfoList() const;

                    /**
                     * 设置The stream status of the input.
                     * @param _inputStreamInfoList The stream status of the input.
                     * 
                     */
                    void SetInputStreamInfoList(const std::vector<InputStreamInfo>& _inputStreamInfoList);

                    /**
                     * 判断参数 InputStreamInfoList 是否已赋值
                     * @return InputStreamInfoList 是否已赋值
                     * 
                     */
                    bool InputStreamInfoListHasBeenSet() const;

                private:

                    /**
                     * The input ID.
                     */
                    std::string m_inputID;
                    bool m_inputIDHasBeenSet;

                    /**
                     * The input name.
                     */
                    std::string m_inputName;
                    bool m_inputNameHasBeenSet;

                    /**
                     * The input protocol.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * The stream status of the input.
                     */
                    std::vector<InputStreamInfo> m_inputStreamInfoList;
                    bool m_inputStreamInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_QUERYDISPATCHINPUTINFO_H_
