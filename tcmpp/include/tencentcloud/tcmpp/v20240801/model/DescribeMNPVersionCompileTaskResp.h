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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPVERSIONCOMPILETASKRESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPVERSIONCOMPILETASKRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPVersionCompileTaskSubSimpleInfo.h>
#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPVersionCompileTaskExtInfo.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Task details
                */
                class DescribeMNPVersionCompileTaskResp : public AbstractModel
                {
                public:
                    DescribeMNPVersionCompileTaskResp();
                    ~DescribeMNPVersionCompileTaskResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取1: Pending; 20: Running; 30: Failed; 60: Succeeded 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskStatus 1: Pending; 20: Running; 30: Failed; 60: Succeeded 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置1: Pending; 20: Running; 30: Failed; 60: Succeeded 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskStatus 1: Pending; 20: Running; 30: Failed; 60: Succeeded 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Task status message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskMsg Task status message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskMsg() const;

                    /**
                     * 设置Task status message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskMsg Task status message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskMsg(const std::string& _taskMsg);

                    /**
                     * 判断参数 TaskMsg 是否已赋值
                     * @return TaskMsg 是否已赋值
                     * 
                     */
                    bool TaskMsgHasBeenSet() const;

                    /**
                     * 获取QR code address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QrCodeUrl QR code address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQrCodeUrl() const;

                    /**
                     * 设置QR code address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qrCodeUrl QR code address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQrCodeUrl(const std::string& _qrCodeUrl);

                    /**
                     * 判断参数 QrCodeUrl 是否已赋值
                     * @return QrCodeUrl 是否已赋值
                     * 
                     */
                    bool QrCodeUrlHasBeenSet() const;

                    /**
                     * 获取Packet size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PkgSize Packet size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPkgSize() const;

                    /**
                     * 设置Packet size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pkgSize Packet size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPkgSize(const int64_t& _pkgSize);

                    /**
                     * 判断参数 PkgSize 是否已赋值
                     * @return PkgSize 是否已赋值
                     * 
                     */
                    bool PkgSizeHasBeenSet() const;

                    /**
                     * 获取Subpackage information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubPkgInfos Subpackage information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DescribeMNPVersionCompileTaskSubSimpleInfo> GetSubPkgInfos() const;

                    /**
                     * 设置Subpackage information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subPkgInfos Subpackage information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubPkgInfos(const std::vector<DescribeMNPVersionCompileTaskSubSimpleInfo>& _subPkgInfos);

                    /**
                     * 判断参数 SubPkgInfos 是否已赋值
                     * @return SubPkgInfos 是否已赋值
                     * 
                     */
                    bool SubPkgInfosHasBeenSet() const;

                    /**
                     * 获取QR code content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QrCodeContent QR code content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQrCodeContent() const;

                    /**
                     * 设置QR code content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qrCodeContent QR code content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQrCodeContent(const std::string& _qrCodeContent);

                    /**
                     * 判断参数 QrCodeContent 是否已赋值
                     * @return QrCodeContent 是否已赋值
                     * 
                     */
                    bool QrCodeContentHasBeenSet() const;

                    /**
                     * 获取Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtInfo Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DescribeMNPVersionCompileTaskExtInfo GetExtInfo() const;

                    /**
                     * 设置Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extInfo Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtInfo(const DescribeMNPVersionCompileTaskExtInfo& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 1: Pending; 20: Running; 30: Failed; 60: Succeeded 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Task status message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskMsg;
                    bool m_taskMsgHasBeenSet;

                    /**
                     * QR code address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_qrCodeUrl;
                    bool m_qrCodeUrlHasBeenSet;

                    /**
                     * Packet size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pkgSize;
                    bool m_pkgSizeHasBeenSet;

                    /**
                     * Subpackage information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DescribeMNPVersionCompileTaskSubSimpleInfo> m_subPkgInfos;
                    bool m_subPkgInfosHasBeenSet;

                    /**
                     * QR code content
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_qrCodeContent;
                    bool m_qrCodeContentHasBeenSet;

                    /**
                     * Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DescribeMNPVersionCompileTaskExtInfo m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPVERSIONCOMPILETASKRESP_H_
