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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBHOOKPOLICYSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBHOOKPOLICYSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyWebHookPolicyStatus request structure.
                */
                class ModifyWebHookPolicyStatusRequest : public AbstractModel
                {
                public:
                    ModifyWebHookPolicyStatusRequest();
                    ~ModifyWebHookPolicyStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取id
                     * @return Id id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置id
                     * @param _id id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Switch: 1 - disabled; 0 - enabled
                     * @return IsDisabled Switch: 1 - disabled; 0 - enabled
                     * 
                     */
                    int64_t GetIsDisabled() const;

                    /**
                     * 设置Switch: 1 - disabled; 0 - enabled
                     * @param _isDisabled Switch: 1 - disabled; 0 - enabled
                     * 
                     */
                    void SetIsDisabled(const int64_t& _isDisabled);

                    /**
                     * 判断参数 IsDisabled 是否已赋值
                     * @return IsDisabled 是否已赋值
                     * 
                     */
                    bool IsDisabledHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Switch: 1 - disabled; 0 - enabled
                     */
                    int64_t m_isDisabled;
                    bool m_isDisabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBHOOKPOLICYSTATUSREQUEST_H_
