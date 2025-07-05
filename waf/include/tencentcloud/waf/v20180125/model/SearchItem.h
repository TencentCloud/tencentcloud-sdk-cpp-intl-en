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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Complex Conditions on Access List Query
                */
                class SearchItem : public AbstractModel
                {
                public:
                    SearchItem();
                    ~SearchItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log switch
                     * @return ClsStatus Log switch
                     * 
                     */
                    std::string GetClsStatus() const;

                    /**
                     * 设置Log switch
                     * @param _clsStatus Log switch
                     * 
                     */
                    void SetClsStatus(const std::string& _clsStatus);

                    /**
                     * 判断参数 ClsStatus 是否已赋值
                     * @return ClsStatus 是否已赋值
                     * 
                     */
                    bool ClsStatusHasBeenSet() const;

                    /**
                     * 获取WAF Switch
                     * @return Status WAF Switch
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置WAF Switch
                     * @param _status WAF Switch
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Traffic mode
                     * @return FlowMode Traffic mode
                     * 
                     */
                    std::string GetFlowMode() const;

                    /**
                     * 设置Traffic mode
                     * @param _flowMode Traffic mode
                     * 
                     */
                    void SetFlowMode(const std::string& _flowMode);

                    /**
                     * 判断参数 FlowMode 是否已赋值
                     * @return FlowMode 是否已赋值
                     * 
                     */
                    bool FlowModeHasBeenSet() const;

                private:

                    /**
                     * Log switch
                     */
                    std::string m_clsStatus;
                    bool m_clsStatusHasBeenSet;

                    /**
                     * WAF Switch
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Traffic mode
                     */
                    std::string m_flowMode;
                    bool m_flowModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHITEM_H_
