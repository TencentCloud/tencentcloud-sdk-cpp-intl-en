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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEBINDTASKDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEBINDTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Authorization binding task details
                */
                class LicenseBindTaskDetail : public AbstractModel
                {
                public:
                    LicenseBindTaskDetail();
                    ~LicenseBindTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CVM UUID
                     * @return Quuid CVM UUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置CVM UUID
                     * @param _quuid CVM UUID
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
                     * 获取0-in progress; 1-succeeded; 2-failed
                     * @return Status 0-in progress; 1-succeeded; 2-failed
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0-in progress; 1-succeeded; 2-failed
                     * @param _status 0-in progress; 1-succeeded; 2-failed
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Fix suggestion
                     * @return FixMessage Fix suggestion
                     * 
                     */
                    std::string GetFixMessage() const;

                    /**
                     * 设置Fix suggestion
                     * @param _fixMessage Fix suggestion
                     * 
                     */
                    void SetFixMessage(const std::string& _fixMessage);

                    /**
                     * 判断参数 FixMessage 是否已赋值
                     * @return FixMessage 是否已赋值
                     * 
                     */
                    bool FixMessageHasBeenSet() const;

                    /**
                     * 获取Additional information of machine
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo Additional information of machine
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Additional information of machine
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo Additional information of machine
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                private:

                    /**
                     * CVM UUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 0-in progress; 1-succeeded; 2-failed
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Fix suggestion
                     */
                    std::string m_fixMessage;
                    bool m_fixMessageHasBeenSet;

                    /**
                     * Additional information of machine
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEBINDTASKDETAIL_H_
