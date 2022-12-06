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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_SCANPIECE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_SCANPIECE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/ScanDetail.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * Voice detection result, which will be returned if `Code` is 0.
                */
                class ScanPiece : public AbstractModel
                {
                public:
                    ScanPiece();
                    ~ScanPiece() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audio retention address, which will be returned for stream detection. The audio will be retained for 30 minutes.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DumpUrl Audio retention address, which will be returned for stream detection. The audio will be retained for 30 minutes.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetDumpUrl() const;

                    /**
                     * 设置Audio retention address, which will be returned for stream detection. The audio will be retained for 30 minutes.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param DumpUrl Audio retention address, which will be returned for stream detection. The audio will be retained for 30 minutes.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDumpUrl(const std::string& _dumpUrl);

                    /**
                     * 判断参数 DumpUrl 是否已赋值
                     * @return DumpUrl 是否已赋值
                     */
                    bool DumpUrlHasBeenSet() const;

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
                     * 获取Main non-compliant content type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return MainType Main non-compliant content type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetMainType() const;

                    /**
                     * 设置Main non-compliant content type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param MainType Main non-compliant content type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMainType(const std::string& _mainType);

                    /**
                     * 判断参数 MainType 是否已赋值
                     * @return MainType 是否已赋值
                     */
                    bool MainTypeHasBeenSet() const;

                    /**
                     * 获取Voice detection details
                     * @return ScanDetail Voice detection details
                     */
                    std::vector<ScanDetail> GetScanDetail() const;

                    /**
                     * 设置Voice detection details
                     * @param ScanDetail Voice detection details
                     */
                    void SetScanDetail(const std::vector<ScanDetail>& _scanDetail);

                    /**
                     * 判断参数 ScanDetail 是否已赋值
                     * @return ScanDetail 是否已赋值
                     */
                    bool ScanDetailHasBeenSet() const;

                    /**
                     * 获取GME Voice Chat room ID, which is the `RoomId` passed through when the task was submitted.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RoomId GME Voice Chat room ID, which is the `RoomId` passed through when the task was submitted.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置GME Voice Chat room ID, which is the `RoomId` passed through when the task was submitted.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param RoomId GME Voice Chat room ID, which is the `RoomId` passed through when the task was submitted.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取GME Voice Chat user ID, which is the `OpenId` passed through when the task was submitted.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return OpenId GME Voice Chat user ID, which is the `OpenId` passed through when the task was submitted.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置GME Voice Chat user ID, which is the `OpenId` passed through when the task was submitted.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param OpenId GME Voice Chat user ID, which is the `OpenId` passed through when the task was submitted.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取Remarks
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Info Remarks
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置Remarks
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Info Remarks
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取Offset time of multipart in stream during stream detection (in milliseconds)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Offset Offset time of multipart in stream during stream detection (in milliseconds)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset time of multipart in stream during stream detection (in milliseconds)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Offset Offset time of multipart in stream during stream detection (in milliseconds)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Multipart duration during stream detection
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Duration Multipart duration during stream detection
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置Multipart duration during stream detection
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Duration Multipart duration during stream detection
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Multipart detection start time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PieceStartTime Multipart detection start time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetPieceStartTime() const;

                    /**
                     * 设置Multipart detection start time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param PieceStartTime Multipart detection start time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPieceStartTime(const uint64_t& _pieceStartTime);

                    /**
                     * 判断参数 PieceStartTime 是否已赋值
                     * @return PieceStartTime 是否已赋值
                     */
                    bool PieceStartTimeHasBeenSet() const;

                private:

                    /**
                     * Audio retention address, which will be returned for stream detection. The audio will be retained for 30 minutes.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dumpUrl;
                    bool m_dumpUrlHasBeenSet;

                    /**
                     * Whether non-compliant information is detected
                     */
                    bool m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * Main non-compliant content type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_mainType;
                    bool m_mainTypeHasBeenSet;

                    /**
                     * Voice detection details
                     */
                    std::vector<ScanDetail> m_scanDetail;
                    bool m_scanDetailHasBeenSet;

                    /**
                     * GME Voice Chat room ID, which is the `RoomId` passed through when the task was submitted.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * GME Voice Chat user ID, which is the `OpenId` passed through when the task was submitted.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * Remarks
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * Offset time of multipart in stream during stream detection (in milliseconds)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Multipart duration during stream detection
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Multipart detection start time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_pieceStartTime;
                    bool m_pieceStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_SCANPIECE_H_
