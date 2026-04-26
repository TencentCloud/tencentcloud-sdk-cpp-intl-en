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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BILLOPERATEUIN_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BILLOPERATEUIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Operator UIN filter list
                */
                class BillOperateUin : public AbstractModel
                {
                public:
                    BillOperateUin();
                    ~BillOperateUin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operator account ID (the resource account ID or role ID opened by prepaid resource ordering or postpaid operation)
                     * @return OperateUin Operator account ID (the resource account ID or role ID opened by prepaid resource ordering or postpaid operation)
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置Operator account ID (the resource account ID or role ID opened by prepaid resource ordering or postpaid operation)
                     * @param _operateUin Operator account ID (the resource account ID or role ID opened by prepaid resource ordering or postpaid operation)
                     * 
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                private:

                    /**
                     * Operator account ID (the resource account ID or role ID opened by prepaid resource ordering or postpaid operation)
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLOPERATEUIN_H_
