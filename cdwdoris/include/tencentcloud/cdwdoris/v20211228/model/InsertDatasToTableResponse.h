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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSERTDATASTOTABLERESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSERTDATASTOTABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * InsertDatasToTable response structure.
                */
                class InsertDatasToTableResponse : public AbstractModel
                {
                public:
                    InsertDatasToTableResponse();
                    ~InsertDatasToTableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the insertion operation is successful
                     * @return Success Whether the insertion operation is successful
                     * 
                     */
                    bool GetSuccess() const;

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取Message description of the operation result
                     * @return Message Message description of the operation result
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Number of inserted data rows
                     * @return InsertCount Number of inserted data rows
                     * 
                     */
                    std::string GetInsertCount() const;

                    /**
                     * 判断参数 InsertCount 是否已赋值
                     * @return InsertCount 是否已赋值
                     * 
                     */
                    bool InsertCountHasBeenSet() const;

                private:

                    /**
                     * Whether the insertion operation is successful
                     */
                    bool m_success;
                    bool m_successHasBeenSet;

                    /**
                     * Message description of the operation result
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Number of inserted data rows
                     */
                    std::string m_insertCount;
                    bool m_insertCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSERTDATASTOTABLERESPONSE_H_
