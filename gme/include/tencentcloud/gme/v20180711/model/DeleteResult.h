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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DELETERESULT_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DELETERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * Result of the operation to delete a room or remove members
                */
                class DeleteResult : public AbstractModel
                {
                public:
                    DeleteResult();
                    ~DeleteResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Status code. `0`: Succeeded. Others: Failed\
                     * @return Code Status code. `0`: Succeeded. Others: Failed\
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置Status code. `0`: Succeeded. Others: Failed\
                     * @param Code Status code. `0`: Succeeded. Others: Failed\
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return ErrorMsg Description
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置Description
                     * @param ErrorMsg Description
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * Status code. `0`: Succeeded. Others: Failed\
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DELETERESULT_H_
