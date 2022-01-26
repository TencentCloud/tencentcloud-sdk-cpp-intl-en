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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_AUDITLOGINFO_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_AUDITLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Log details
                */
                class AuditLogInfo : public AbstractModel
                {
                public:
                    AuditLogInfo();
                    ~AuditLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time
                     * @return Date Time
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Time
                     * @param Date Time
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Operator UIN
                     * @return OperatorUin Operator UIN
                     */
                    std::string GetOperatorUin() const;

                    /**
                     * 设置Operator UIN
                     * @param OperatorUin Operator UIN
                     */
                    void SetOperatorUin(const std::string& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取Log content
                     * @return Content Log content
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Log content
                     * @param Content Log content
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * Time
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Operator UIN
                     */
                    std::string m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * Log content
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_AUDITLOGINFO_H_
