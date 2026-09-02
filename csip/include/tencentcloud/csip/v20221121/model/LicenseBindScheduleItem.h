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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSEBINDSCHEDULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSEBINDSCHEDULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Binding status details of a single machine
                */
                class LicenseBindScheduleItem : public AbstractModel
                {
                public:
                    LicenseBindScheduleItem();
                    ~LicenseBindScheduleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return Quuid Instance ID.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Instance ID.
                     * @param _quuid Instance ID.
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Binding status. 0: initialization; 1: successful; 2: failed; 3: skipped.
                     * @return Status Binding status. 0: initialization; 1: successful; 2: failed; 3: skipped.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Binding status. 0: initialization; 1: successful; 2: failed; 3: skipped.
                     * @param _status Binding status. 0: initialization; 1: successful; 2: failed; 3: skipped.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error message
                     * @return ErrMsg Error message
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置Error message
                     * @param _errMsg Error message
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取Fixing suggestion
                     * @return FixMessage Fixing suggestion
                     * 
                     */
                    std::string GetFixMessage() const;

                    /**
                     * 设置Fixing suggestion
                     * @param _fixMessage Fixing suggestion
                     * 
                     */
                    void SetFixMessage(const std::string& _fixMessage);

                    /**
                     * 判断参数 FixMessage 是否已赋值
                     * @return FixMessage 是否已赋值
                     * 
                     */
                    bool FixMessageHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Binding status. 0: initialization; 1: successful; 2: failed; 3: skipped.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * Fixing suggestion
                     */
                    std::string m_fixMessage;
                    bool m_fixMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LICENSEBINDSCHEDULEITEM_H_
