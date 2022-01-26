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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULT_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/ScanPiece.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * Returned speech detection result
                */
                class DescribeScanResult : public AbstractModel
                {
                public:
                    DescribeScanResult();
                    ~DescribeScanResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Business return code
                     * @return Code Business return code
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置Business return code
                     * @param Code Business return code
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Unique data ID
                     * @return DataId Unique data ID
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置Unique data ID
                     * @param DataId Unique data ID
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取Detection completion timestamp
                     * @return ScanFinishTime Detection completion timestamp
                     */
                    uint64_t GetScanFinishTime() const;

                    /**
                     * 设置Detection completion timestamp
                     * @param ScanFinishTime Detection completion timestamp
                     */
                    void SetScanFinishTime(const uint64_t& _scanFinishTime);

                    /**
                     * 判断参数 ScanFinishTime 是否已赋值
                     * @return ScanFinishTime 是否已赋值
                     */
                    bool ScanFinishTimeHasBeenSet() const;

                    /**
                     * 获取Whether non-compliant information is detected
                     * @return HitFlag Whether non-compliant information is detected
                     */
                    bool GetHitFlag() const;

                    /**
                     * 设置Whether non-compliant information is detected
                     * @param HitFlag Whether non-compliant information is detected
                     */
                    void SetHitFlag(const bool& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     */
                    bool HitFlagHasBeenSet() const;

                    /**
                     * 获取Whether it is a stream
                     * @return Live Whether it is a stream
                     */
                    bool GetLive() const;

                    /**
                     * 设置Whether it is a stream
                     * @param Live Whether it is a stream
                     */
                    void SetLive(const bool& _live);

                    /**
                     * 判断参数 Live 是否已赋值
                     * @return Live 是否已赋值
                     */
                    bool LiveHasBeenSet() const;

                    /**
                     * 获取Business return description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Msg Business return description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置Business return description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Msg Business return description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取Detection result, which will be returned if `Code` is 0
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ScanPiece Detection result, which will be returned if `Code` is 0
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ScanPiece> GetScanPiece() const;

                    /**
                     * 设置Detection result, which will be returned if `Code` is 0
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ScanPiece Detection result, which will be returned if `Code` is 0
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetScanPiece(const std::vector<ScanPiece>& _scanPiece);

                    /**
                     * 判断参数 ScanPiece 是否已赋值
                     * @return ScanPiece 是否已赋值
                     */
                    bool ScanPieceHasBeenSet() const;

                    /**
                     * 获取Detection task submission timestamp
                     * @return ScanStartTime Detection task submission timestamp
                     */
                    uint64_t GetScanStartTime() const;

                    /**
                     * 设置Detection task submission timestamp
                     * @param ScanStartTime Detection task submission timestamp
                     */
                    void SetScanStartTime(const uint64_t& _scanStartTime);

                    /**
                     * 判断参数 ScanStartTime 是否已赋值
                     * @return ScanStartTime 是否已赋值
                     */
                    bool ScanStartTimeHasBeenSet() const;

                    /**
                     * 获取Speech detection scenario, which corresponds to the `Scene` at the time of request
                     * @return Scenes Speech detection scenario, which corresponds to the `Scene` at the time of request
                     */
                    std::vector<std::string> GetScenes() const;

                    /**
                     * 设置Speech detection scenario, which corresponds to the `Scene` at the time of request
                     * @param Scenes Speech detection scenario, which corresponds to the `Scene` at the time of request
                     */
                    void SetScenes(const std::vector<std::string>& _scenes);

                    /**
                     * 判断参数 Scenes 是否已赋值
                     * @return Scenes 是否已赋值
                     */
                    bool ScenesHasBeenSet() const;

                    /**
                     * 获取Speech detection task ID, which is assigned by the backend
                     * @return TaskId Speech detection task ID, which is assigned by the backend
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Speech detection task ID, which is assigned by the backend
                     * @param TaskId Speech detection task ID, which is assigned by the backend
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取File or stream address
                     * @return Url File or stream address
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置File or stream address
                     * @param Url File or stream address
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Detection task execution result task. Valid values:
<li>Start: task started</li>
<li>Success: task ended successfully</li>
<li>Error: exceptional</li>
                     * @return Status Detection task execution result task. Valid values:
<li>Start: task started</li>
<li>Success: task ended successfully</li>
<li>Error: exceptional</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Detection task execution result task. Valid values:
<li>Start: task started</li>
<li>Success: task ended successfully</li>
<li>Error: exceptional</li>
                     * @param Status Detection task execution result task. Valid values:
<li>Start: task started</li>
<li>Success: task ended successfully</li>
<li>Error: exceptional</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取ID of the application submitted for detection
                     * @return BizId ID of the application submitted for detection
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置ID of the application submitted for detection
                     * @param BizId ID of the application submitted for detection
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                private:

                    /**
                     * Business return code
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Unique data ID
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * Detection completion timestamp
                     */
                    uint64_t m_scanFinishTime;
                    bool m_scanFinishTimeHasBeenSet;

                    /**
                     * Whether non-compliant information is detected
                     */
                    bool m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * Whether it is a stream
                     */
                    bool m_live;
                    bool m_liveHasBeenSet;

                    /**
                     * Business return description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * Detection result, which will be returned if `Code` is 0
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ScanPiece> m_scanPiece;
                    bool m_scanPieceHasBeenSet;

                    /**
                     * Detection task submission timestamp
                     */
                    uint64_t m_scanStartTime;
                    bool m_scanStartTimeHasBeenSet;

                    /**
                     * Speech detection scenario, which corresponds to the `Scene` at the time of request
                     */
                    std::vector<std::string> m_scenes;
                    bool m_scenesHasBeenSet;

                    /**
                     * Speech detection task ID, which is assigned by the backend
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * File or stream address
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Detection task execution result task. Valid values:
<li>Start: task started</li>
<li>Success: task ended successfully</li>
<li>Error: exceptional</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * ID of the application submitted for detection
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULT_H_
