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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETECOSRECHARGEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETECOSRECHARGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteCosRecharge request structure.
                */
                class DeleteCosRechargeRequest : public AbstractModel
                {
                public:
                    DeleteCosRechargeRequest();
                    ~DeleteCosRechargeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取COS import configuration Id.
-Get the cos import configuration Id by [searching for the cos import configuration](https://www.tencentcloud.com/document/product/614/88099?from_cn_redirect=1).
                     * @return Id COS import configuration Id.
-Get the cos import configuration Id by [searching for the cos import configuration](https://www.tencentcloud.com/document/product/614/88099?from_cn_redirect=1).
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置COS import configuration Id.
-Get the cos import configuration Id by [searching for the cos import configuration](https://www.tencentcloud.com/document/product/614/88099?from_cn_redirect=1).
                     * @param _id COS import configuration Id.
-Get the cos import configuration Id by [searching for the cos import configuration](https://www.tencentcloud.com/document/product/614/88099?from_cn_redirect=1).
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Log topic Id.
- Get the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/api/614/56454?from_cn_redirect=1).
                     * @return TopicId Log topic Id.
- Get the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/api/614/56454?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic Id.
- Get the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/api/614/56454?from_cn_redirect=1).
                     * @param _topicId Log topic Id.
- Get the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/api/614/56454?from_cn_redirect=1).
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * COS import configuration Id.
-Get the cos import configuration Id by [searching for the cos import configuration](https://www.tencentcloud.com/document/product/614/88099?from_cn_redirect=1).
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Log topic Id.
- Get the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/api/614/56454?from_cn_redirect=1).
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETECOSRECHARGEREQUEST_H_
