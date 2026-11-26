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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITTEMPLATE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RateLimitTemplateDetail.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Rate limit template
                */
                class RateLimitTemplate : public AbstractModel
                {
                public:
                    RateLimitTemplate();
                    ~RateLimitTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template level name. Valid values:
<li>sup_loose: super loose;</li>
<li>loose: loose;</li>
<li>emergency: emergency;</li>
<li>normal: moderate;</li>
<li>strict: strict;</li>
<li>close: disabled, effective only for precise rate limiting.</li>
                     * @return Mode Template level name. Valid values:
<li>sup_loose: super loose;</li>
<li>loose: loose;</li>
<li>emergency: emergency;</li>
<li>normal: moderate;</li>
<li>strict: strict;</li>
<li>close: disabled, effective only for precise rate limiting.</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Template level name. Valid values:
<li>sup_loose: super loose;</li>
<li>loose: loose;</li>
<li>emergency: emergency;</li>
<li>normal: moderate;</li>
<li>strict: strict;</li>
<li>close: disabled, effective only for precise rate limiting.</li>
                     * @param _mode Template level name. Valid values:
<li>sup_loose: super loose;</li>
<li>loose: loose;</li>
<li>emergency: emergency;</li>
<li>normal: moderate;</li>
<li>strict: strict;</li>
<li>close: disabled, effective only for precise rate limiting.</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Template action. Valid values:
<li>alg: JavaScript challenge;</li>
<li>monitor: observe.</li>Default value: alg if not specified.
                     * @return Action Template action. Valid values:
<li>alg: JavaScript challenge;</li>
<li>monitor: observe.</li>Default value: alg if not specified.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Template action. Valid values:
<li>alg: JavaScript challenge;</li>
<li>monitor: observe.</li>Default value: alg if not specified.
                     * @param _action Template action. Valid values:
<li>alg: JavaScript challenge;</li>
<li>monitor: observe.</li>Default value: alg if not specified.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Description of the template value. Returned only as an output parameter.
                     * @return RateLimitTemplateDetail Description of the template value. Returned only as an output parameter.
                     * 
                     */
                    RateLimitTemplateDetail GetRateLimitTemplateDetail() const;

                    /**
                     * 设置Description of the template value. Returned only as an output parameter.
                     * @param _rateLimitTemplateDetail Description of the template value. Returned only as an output parameter.
                     * 
                     */
                    void SetRateLimitTemplateDetail(const RateLimitTemplateDetail& _rateLimitTemplateDetail);

                    /**
                     * 判断参数 RateLimitTemplateDetail 是否已赋值
                     * @return RateLimitTemplateDetail 是否已赋值
                     * 
                     */
                    bool RateLimitTemplateDetailHasBeenSet() const;

                private:

                    /**
                     * Template level name. Valid values:
<li>sup_loose: super loose;</li>
<li>loose: loose;</li>
<li>emergency: emergency;</li>
<li>normal: moderate;</li>
<li>strict: strict;</li>
<li>close: disabled, effective only for precise rate limiting.</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Template action. Valid values:
<li>alg: JavaScript challenge;</li>
<li>monitor: observe.</li>Default value: alg if not specified.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Description of the template value. Returned only as an output parameter.
                     */
                    RateLimitTemplateDetail m_rateLimitTemplateDetail;
                    bool m_rateLimitTemplateDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITTEMPLATE_H_
