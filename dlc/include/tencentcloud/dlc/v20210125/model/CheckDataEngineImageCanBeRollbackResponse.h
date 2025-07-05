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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINEIMAGECANBEROLLBACKRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINEIMAGECANBEROLLBACKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CheckDataEngineImageCanBeRollback response structure.
                */
                class CheckDataEngineImageCanBeRollbackResponse : public AbstractModel
                {
                public:
                    CheckDataEngineImageCanBeRollbackResponse();
                    ~CheckDataEngineImageCanBeRollbackResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Log record ID after rolling back
                     * @return ToRecordId Log record ID after rolling back
                     * 
                     */
                    std::string GetToRecordId() const;

                    /**
                     * 判断参数 ToRecordId 是否已赋值
                     * @return ToRecordId 是否已赋值
                     * 
                     */
                    bool ToRecordIdHasBeenSet() const;

                    /**
                     * 获取Log record ID before rolling back
                     * @return FromRecordId Log record ID before rolling back
                     * 
                     */
                    std::string GetFromRecordId() const;

                    /**
                     * 判断参数 FromRecordId 是否已赋值
                     * @return FromRecordId 是否已赋值
                     * 
                     */
                    bool FromRecordIdHasBeenSet() const;

                    /**
                     * 获取Whether it can be rolled back
                     * @return IsRollback Whether it can be rolled back
                     * 
                     */
                    bool GetIsRollback() const;

                    /**
                     * 判断参数 IsRollback 是否已赋值
                     * @return IsRollback 是否已赋值
                     * 
                     */
                    bool IsRollbackHasBeenSet() const;

                private:

                    /**
                     * Log record ID after rolling back
                     */
                    std::string m_toRecordId;
                    bool m_toRecordIdHasBeenSet;

                    /**
                     * Log record ID before rolling back
                     */
                    std::string m_fromRecordId;
                    bool m_fromRecordIdHasBeenSet;

                    /**
                     * Whether it can be rolled back
                     */
                    bool m_isRollback;
                    bool m_isRollbackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINEIMAGECANBEROLLBACKRESPONSE_H_
