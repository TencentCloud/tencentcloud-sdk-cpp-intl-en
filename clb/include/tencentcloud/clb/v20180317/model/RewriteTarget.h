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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REWRITETARGET_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REWRITETARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Redirect target information
                */
                class RewriteTarget : public AbstractModel
                {
                public:
                    RewriteTarget();
                    ~RewriteTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Listener ID of a redirect target
Note: This field may return null, indicating that there is no redirection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetListenerId Listener ID of a redirect target
Note: This field may return null, indicating that there is no redirection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTargetListenerId() const;

                    /**
                     * 设置Listener ID of a redirect target
Note: This field may return null, indicating that there is no redirection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TargetListenerId Listener ID of a redirect target
Note: This field may return null, indicating that there is no redirection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTargetListenerId(const std::string& _targetListenerId);

                    /**
                     * 判断参数 TargetListenerId 是否已赋值
                     * @return TargetListenerId 是否已赋值
                     */
                    bool TargetListenerIdHasBeenSet() const;

                    /**
                     * 获取Forwarding rule ID of a redirect target
Note: This field may return null, indicating that there is no redirection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetLocationId Forwarding rule ID of a redirect target
Note: This field may return null, indicating that there is no redirection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTargetLocationId() const;

                    /**
                     * 设置Forwarding rule ID of a redirect target
Note: This field may return null, indicating that there is no redirection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TargetLocationId Forwarding rule ID of a redirect target
Note: This field may return null, indicating that there is no redirection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTargetLocationId(const std::string& _targetLocationId);

                    /**
                     * 判断参数 TargetLocationId 是否已赋值
                     * @return TargetLocationId 是否已赋值
                     */
                    bool TargetLocationIdHasBeenSet() const;

                    /**
                     * 获取Redirection status code
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RewriteCode Redirection status code
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetRewriteCode() const;

                    /**
                     * 设置Redirection status code
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param RewriteCode Redirection status code
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRewriteCode(const int64_t& _rewriteCode);

                    /**
                     * 判断参数 RewriteCode 是否已赋值
                     * @return RewriteCode 是否已赋值
                     */
                    bool RewriteCodeHasBeenSet() const;

                    /**
                     * 获取Whether the matched URL is carried in redirection.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TakeUrl Whether the matched URL is carried in redirection.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetTakeUrl() const;

                    /**
                     * 设置Whether the matched URL is carried in redirection.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param TakeUrl Whether the matched URL is carried in redirection.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTakeUrl(const bool& _takeUrl);

                    /**
                     * 判断参数 TakeUrl 是否已赋值
                     * @return TakeUrl 是否已赋值
                     */
                    bool TakeUrlHasBeenSet() const;

                    /**
                     * 获取Redirection type. Manual: manual redirection; Auto: automatic redirection.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RewriteType Redirection type. Manual: manual redirection; Auto: automatic redirection.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetRewriteType() const;

                    /**
                     * 设置Redirection type. Manual: manual redirection; Auto: automatic redirection.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param RewriteType Redirection type. Manual: manual redirection; Auto: automatic redirection.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRewriteType(const std::string& _rewriteType);

                    /**
                     * 判断参数 RewriteType 是否已赋值
                     * @return RewriteType 是否已赋值
                     */
                    bool RewriteTypeHasBeenSet() const;

                private:

                    /**
                     * Listener ID of a redirect target
Note: This field may return null, indicating that there is no redirection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetListenerId;
                    bool m_targetListenerIdHasBeenSet;

                    /**
                     * Forwarding rule ID of a redirect target
Note: This field may return null, indicating that there is no redirection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetLocationId;
                    bool m_targetLocationIdHasBeenSet;

                    /**
                     * Redirection status code
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_rewriteCode;
                    bool m_rewriteCodeHasBeenSet;

                    /**
                     * Whether the matched URL is carried in redirection.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_takeUrl;
                    bool m_takeUrlHasBeenSet;

                    /**
                     * Redirection type. Manual: manual redirection; Auto: automatic redirection.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_rewriteType;
                    bool m_rewriteTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REWRITETARGET_H_
