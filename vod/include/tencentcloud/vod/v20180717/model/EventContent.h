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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EVENTCONTENT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EVENTCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/FileUploadTask.h>
#include <tencentcloud/vod/v20180717/model/ProcedureTask.h>
#include <tencentcloud/vod/v20180717/model/FileDeleteTask.h>
#include <tencentcloud/vod/v20180717/model/PullUploadTask.h>
#include <tencentcloud/vod/v20180717/model/EditMediaTask.h>
#include <tencentcloud/vod/v20180717/model/SplitMediaTask.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaTask.h>
#include <tencentcloud/vod/v20180717/model/ClipTask2017.h>
#include <tencentcloud/vod/v20180717/model/TranscodeTask2017.h>
#include <tencentcloud/vod/v20180717/model/CreateImageSpriteTask2017.h>
#include <tencentcloud/vod/v20180717/model/ConcatTask2017.h>
#include <tencentcloud/vod/v20180717/model/SnapshotByTimeOffsetTask2017.h>
#include <tencentcloud/vod/v20180717/model/WechatPublishTask.h>
#include <tencentcloud/vod/v20180717/model/WechatMiniProgramPublishTask.h>
#include <tencentcloud/vod/v20180717/model/RemoveWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/RestoreMediaTask.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaTask.h>
#include <tencentcloud/vod/v20180717/model/ExtractTraceWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/ExtractCopyRightWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/ReviewAudioVideoTask.h>
#include <tencentcloud/vod/v20180717/model/ReduceMediaBitrateTask.h>
#include <tencentcloud/vod/v20180717/model/DescribeFileAttributesTask.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectTask.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Event notification content, where TranscodeCompleteEvent, ConcatCompleteEvent, ClipCompleteEvent, CreateImageSpriteCompleteEvent, and SnapshotByTimeOffsetCompleteEvent are event notifications for tasks that are initiated by v2017-compatible APIs.
                */
                class EventContent : public AbstractModel
                {
                public:
                    EventContent();
                    ~EventContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event handler. The caller must call `ConfirmEvents` to confirm that the message has been received, and the confirmation is valid for 30 seconds. After the confirmation expires, the event can be obtained again.
                     * @return EventHandle Event handler. The caller must call `ConfirmEvents` to confirm that the message has been received, and the confirmation is valid for 30 seconds. After the confirmation expires, the event can be obtained again.
                     * 
                     */
                    std::string GetEventHandle() const;

                    /**
                     * 设置Event handler. The caller must call `ConfirmEvents` to confirm that the message has been received, and the confirmation is valid for 30 seconds. After the confirmation expires, the event can be obtained again.
                     * @param _eventHandle Event handler. The caller must call `ConfirmEvents` to confirm that the message has been received, and the confirmation is valid for 30 seconds. After the confirmation expires, the event can be obtained again.
                     * 
                     */
                    void SetEventHandle(const std::string& _eventHandle);

                    /**
                     * 判断参数 EventHandle 是否已赋值
                     * @return EventHandle 是否已赋值
                     * 
                     */
                    bool EventHandleHasBeenSet() const;

                    /**
                     * 获取<b>Supported event types:</b>
<li>`NewFileUpload`: Video uploaded.</li>
<li>`ProcedureStateChanged`: Task flow status changed.</li>
<li>`FileDeleted`: Video deleted.</li>
<li>`RestoreMediaComplete`: Video retrieved.</li>
<li>`PullComplete`: Finished video pulling.</li>
<li>`EditMediaComplete`: Finished video editing.</li>
<li>`SplitMediaComplete`: Finished video splitting.</li>
<li>`ComposeMediaComplete`: Finished producing the media file.</li>
<li>`WechatMiniProgramPublishComplete`: Finished publishing on Weixin Mini Program.</li>
<li>`RemoveWatermark`: Watermark removed.</li>
<li>`RebuildMediaComplete`: Finished audio/video remastering.</li>
<li>`ReviewAudioVideoComplete`: Finished moderation.</li>
<li>`ExtractTraceWatermarkComplete`: Finished digital watermark extraction.</li>
<li>`DescribeFileAttributesComplete`: Finished getting file attributes.</li>
<b>v2017 task types:</b>
<li>`TranscodeComplete`: Finished video transcoding.</li>
<li>`ConcatComplete`: Finished video splicing.</li>
<li>`ClipComplete`: Finished video clipping.</li>
<li>`CreateImageSpriteComplete`: Finished image sprite generation.</li>
<li>`CreateSnapshotByTimeOffsetComplete`: Finished time point screencapturing.</li>
                     * @return EventType <b>Supported event types:</b>
<li>`NewFileUpload`: Video uploaded.</li>
<li>`ProcedureStateChanged`: Task flow status changed.</li>
<li>`FileDeleted`: Video deleted.</li>
<li>`RestoreMediaComplete`: Video retrieved.</li>
<li>`PullComplete`: Finished video pulling.</li>
<li>`EditMediaComplete`: Finished video editing.</li>
<li>`SplitMediaComplete`: Finished video splitting.</li>
<li>`ComposeMediaComplete`: Finished producing the media file.</li>
<li>`WechatMiniProgramPublishComplete`: Finished publishing on Weixin Mini Program.</li>
<li>`RemoveWatermark`: Watermark removed.</li>
<li>`RebuildMediaComplete`: Finished audio/video remastering.</li>
<li>`ReviewAudioVideoComplete`: Finished moderation.</li>
<li>`ExtractTraceWatermarkComplete`: Finished digital watermark extraction.</li>
<li>`DescribeFileAttributesComplete`: Finished getting file attributes.</li>
<b>v2017 task types:</b>
<li>`TranscodeComplete`: Finished video transcoding.</li>
<li>`ConcatComplete`: Finished video splicing.</li>
<li>`ClipComplete`: Finished video clipping.</li>
<li>`CreateImageSpriteComplete`: Finished image sprite generation.</li>
<li>`CreateSnapshotByTimeOffsetComplete`: Finished time point screencapturing.</li>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<b>Supported event types:</b>
<li>`NewFileUpload`: Video uploaded.</li>
<li>`ProcedureStateChanged`: Task flow status changed.</li>
<li>`FileDeleted`: Video deleted.</li>
<li>`RestoreMediaComplete`: Video retrieved.</li>
<li>`PullComplete`: Finished video pulling.</li>
<li>`EditMediaComplete`: Finished video editing.</li>
<li>`SplitMediaComplete`: Finished video splitting.</li>
<li>`ComposeMediaComplete`: Finished producing the media file.</li>
<li>`WechatMiniProgramPublishComplete`: Finished publishing on Weixin Mini Program.</li>
<li>`RemoveWatermark`: Watermark removed.</li>
<li>`RebuildMediaComplete`: Finished audio/video remastering.</li>
<li>`ReviewAudioVideoComplete`: Finished moderation.</li>
<li>`ExtractTraceWatermarkComplete`: Finished digital watermark extraction.</li>
<li>`DescribeFileAttributesComplete`: Finished getting file attributes.</li>
<b>v2017 task types:</b>
<li>`TranscodeComplete`: Finished video transcoding.</li>
<li>`ConcatComplete`: Finished video splicing.</li>
<li>`ClipComplete`: Finished video clipping.</li>
<li>`CreateImageSpriteComplete`: Finished image sprite generation.</li>
<li>`CreateSnapshotByTimeOffsetComplete`: Finished time point screencapturing.</li>
                     * @param _eventType <b>Supported event types:</b>
<li>`NewFileUpload`: Video uploaded.</li>
<li>`ProcedureStateChanged`: Task flow status changed.</li>
<li>`FileDeleted`: Video deleted.</li>
<li>`RestoreMediaComplete`: Video retrieved.</li>
<li>`PullComplete`: Finished video pulling.</li>
<li>`EditMediaComplete`: Finished video editing.</li>
<li>`SplitMediaComplete`: Finished video splitting.</li>
<li>`ComposeMediaComplete`: Finished producing the media file.</li>
<li>`WechatMiniProgramPublishComplete`: Finished publishing on Weixin Mini Program.</li>
<li>`RemoveWatermark`: Watermark removed.</li>
<li>`RebuildMediaComplete`: Finished audio/video remastering.</li>
<li>`ReviewAudioVideoComplete`: Finished moderation.</li>
<li>`ExtractTraceWatermarkComplete`: Finished digital watermark extraction.</li>
<li>`DescribeFileAttributesComplete`: Finished getting file attributes.</li>
<b>v2017 task types:</b>
<li>`TranscodeComplete`: Finished video transcoding.</li>
<li>`ConcatComplete`: Finished video splicing.</li>
<li>`ClipComplete`: Finished video clipping.</li>
<li>`CreateImageSpriteComplete`: Finished image sprite generation.</li>
<li>`CreateSnapshotByTimeOffsetComplete`: Finished time point screencapturing.</li>
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return FileUploadEvent 
                     * 
                     */
                    FileUploadTask GetFileUploadEvent() const;

                    /**
                     * 设置
                     * @param _fileUploadEvent 
                     * 
                     */
                    void SetFileUploadEvent(const FileUploadTask& _fileUploadEvent);

                    /**
                     * 判断参数 FileUploadEvent 是否已赋值
                     * @return FileUploadEvent 是否已赋值
                     * 
                     */
                    bool FileUploadEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProcedureStateChangeEvent 
                     * 
                     */
                    ProcedureTask GetProcedureStateChangeEvent() const;

                    /**
                     * 设置
                     * @param _procedureStateChangeEvent 
                     * 
                     */
                    void SetProcedureStateChangeEvent(const ProcedureTask& _procedureStateChangeEvent);

                    /**
                     * 判断参数 ProcedureStateChangeEvent 是否已赋值
                     * @return ProcedureStateChangeEvent 是否已赋值
                     * 
                     */
                    bool ProcedureStateChangeEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return FileDeleteEvent 
                     * 
                     */
                    FileDeleteTask GetFileDeleteEvent() const;

                    /**
                     * 设置
                     * @param _fileDeleteEvent 
                     * 
                     */
                    void SetFileDeleteEvent(const FileDeleteTask& _fileDeleteEvent);

                    /**
                     * 判断参数 FileDeleteEvent 是否已赋值
                     * @return FileDeleteEvent 是否已赋值
                     * 
                     */
                    bool FileDeleteEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return PullCompleteEvent 
                     * 
                     */
                    PullUploadTask GetPullCompleteEvent() const;

                    /**
                     * 设置
                     * @param _pullCompleteEvent 
                     * 
                     */
                    void SetPullCompleteEvent(const PullUploadTask& _pullCompleteEvent);

                    /**
                     * 判断参数 PullCompleteEvent 是否已赋值
                     * @return PullCompleteEvent 是否已赋值
                     * 
                     */
                    bool PullCompleteEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return EditMediaCompleteEvent 
                     * 
                     */
                    EditMediaTask GetEditMediaCompleteEvent() const;

                    /**
                     * 设置
                     * @param _editMediaCompleteEvent 
                     * 
                     */
                    void SetEditMediaCompleteEvent(const EditMediaTask& _editMediaCompleteEvent);

                    /**
                     * 判断参数 EditMediaCompleteEvent 是否已赋值
                     * @return EditMediaCompleteEvent 是否已赋值
                     * 
                     */
                    bool EditMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取The notification for completing video splitting, which is valid if the event type is `SplitMediaComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SplitMediaCompleteEvent The notification for completing video splitting, which is valid if the event type is `SplitMediaComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SplitMediaTask GetSplitMediaCompleteEvent() const;

                    /**
                     * 设置The notification for completing video splitting, which is valid if the event type is `SplitMediaComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _splitMediaCompleteEvent The notification for completing video splitting, which is valid if the event type is `SplitMediaComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSplitMediaCompleteEvent(const SplitMediaTask& _splitMediaCompleteEvent);

                    /**
                     * 判断参数 SplitMediaCompleteEvent 是否已赋值
                     * @return SplitMediaCompleteEvent 是否已赋值
                     * 
                     */
                    bool SplitMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return ComposeMediaCompleteEvent 
                     * 
                     */
                    ComposeMediaTask GetComposeMediaCompleteEvent() const;

                    /**
                     * 设置
                     * @param _composeMediaCompleteEvent 
                     * 
                     */
                    void SetComposeMediaCompleteEvent(const ComposeMediaTask& _composeMediaCompleteEvent);

                    /**
                     * 判断参数 ComposeMediaCompleteEvent 是否已赋值
                     * @return ComposeMediaCompleteEvent 是否已赋值
                     * 
                     */
                    bool ComposeMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClipCompleteEvent 
                     * 
                     */
                    ClipTask2017 GetClipCompleteEvent() const;

                    /**
                     * 设置
                     * @param _clipCompleteEvent 
                     * 
                     */
                    void SetClipCompleteEvent(const ClipTask2017& _clipCompleteEvent);

                    /**
                     * 判断参数 ClipCompleteEvent 是否已赋值
                     * @return ClipCompleteEvent 是否已赋值
                     * 
                     */
                    bool ClipCompleteEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return TranscodeCompleteEvent 
                     * 
                     */
                    TranscodeTask2017 GetTranscodeCompleteEvent() const;

                    /**
                     * 设置
                     * @param _transcodeCompleteEvent 
                     * 
                     */
                    void SetTranscodeCompleteEvent(const TranscodeTask2017& _transcodeCompleteEvent);

                    /**
                     * 判断参数 TranscodeCompleteEvent 是否已赋值
                     * @return TranscodeCompleteEvent 是否已赋值
                     * 
                     */
                    bool TranscodeCompleteEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return CreateImageSpriteCompleteEvent 
                     * 
                     */
                    CreateImageSpriteTask2017 GetCreateImageSpriteCompleteEvent() const;

                    /**
                     * 设置
                     * @param _createImageSpriteCompleteEvent 
                     * 
                     */
                    void SetCreateImageSpriteCompleteEvent(const CreateImageSpriteTask2017& _createImageSpriteCompleteEvent);

                    /**
                     * 判断参数 CreateImageSpriteCompleteEvent 是否已赋值
                     * @return CreateImageSpriteCompleteEvent 是否已赋值
                     * 
                     */
                    bool CreateImageSpriteCompleteEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return ConcatCompleteEvent 
                     * 
                     */
                    ConcatTask2017 GetConcatCompleteEvent() const;

                    /**
                     * 设置
                     * @param _concatCompleteEvent 
                     * 
                     */
                    void SetConcatCompleteEvent(const ConcatTask2017& _concatCompleteEvent);

                    /**
                     * 判断参数 ConcatCompleteEvent 是否已赋值
                     * @return ConcatCompleteEvent 是否已赋值
                     * 
                     */
                    bool ConcatCompleteEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return SnapshotByTimeOffsetCompleteEvent 
                     * 
                     */
                    SnapshotByTimeOffsetTask2017 GetSnapshotByTimeOffsetCompleteEvent() const;

                    /**
                     * 设置
                     * @param _snapshotByTimeOffsetCompleteEvent 
                     * 
                     */
                    void SetSnapshotByTimeOffsetCompleteEvent(const SnapshotByTimeOffsetTask2017& _snapshotByTimeOffsetCompleteEvent);

                    /**
                     * 判断参数 SnapshotByTimeOffsetCompleteEvent 是否已赋值
                     * @return SnapshotByTimeOffsetCompleteEvent 是否已赋值
                     * 
                     */
                    bool SnapshotByTimeOffsetCompleteEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return WechatPublishCompleteEvent 
                     * 
                     */
                    WechatPublishTask GetWechatPublishCompleteEvent() const;

                    /**
                     * 设置
                     * @param _wechatPublishCompleteEvent 
                     * 
                     */
                    void SetWechatPublishCompleteEvent(const WechatPublishTask& _wechatPublishCompleteEvent);

                    /**
                     * 判断参数 WechatPublishCompleteEvent 是否已赋值
                     * @return WechatPublishCompleteEvent 是否已赋值
                     * 
                     */
                    bool WechatPublishCompleteEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return WechatMiniProgramPublishCompleteEvent 
                     * 
                     */
                    WechatMiniProgramPublishTask GetWechatMiniProgramPublishCompleteEvent() const;

                    /**
                     * 设置
                     * @param _wechatMiniProgramPublishCompleteEvent 
                     * 
                     */
                    void SetWechatMiniProgramPublishCompleteEvent(const WechatMiniProgramPublishTask& _wechatMiniProgramPublishCompleteEvent);

                    /**
                     * 判断参数 WechatMiniProgramPublishCompleteEvent 是否已赋值
                     * @return WechatMiniProgramPublishCompleteEvent 是否已赋值
                     * 
                     */
                    bool WechatMiniProgramPublishCompleteEventHasBeenSet() const;

                    /**
                     * 获取The notification for completing watermark removal. This parameter is valid only if the event type is `RemoveWatermark`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RemoveWatermarkCompleteEvent The notification for completing watermark removal. This parameter is valid only if the event type is `RemoveWatermark`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RemoveWatermarkTask GetRemoveWatermarkCompleteEvent() const;

                    /**
                     * 设置The notification for completing watermark removal. This parameter is valid only if the event type is `RemoveWatermark`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _removeWatermarkCompleteEvent The notification for completing watermark removal. This parameter is valid only if the event type is `RemoveWatermark`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemoveWatermarkCompleteEvent(const RemoveWatermarkTask& _removeWatermarkCompleteEvent);

                    /**
                     * 判断参数 RemoveWatermarkCompleteEvent 是否已赋值
                     * @return RemoveWatermarkCompleteEvent 是否已赋值
                     * 
                     */
                    bool RemoveWatermarkCompleteEventHasBeenSet() const;

                    /**
                     * 获取The notification for completing video retrieval. This parameter is valid if the event type is `RestoreMediaComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RestoreMediaCompleteEvent The notification for completing video retrieval. This parameter is valid if the event type is `RestoreMediaComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RestoreMediaTask GetRestoreMediaCompleteEvent() const;

                    /**
                     * 设置The notification for completing video retrieval. This parameter is valid if the event type is `RestoreMediaComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _restoreMediaCompleteEvent The notification for completing video retrieval. This parameter is valid if the event type is `RestoreMediaComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRestoreMediaCompleteEvent(const RestoreMediaTask& _restoreMediaCompleteEvent);

                    /**
                     * 判断参数 RestoreMediaCompleteEvent 是否已赋值
                     * @return RestoreMediaCompleteEvent 是否已赋值
                     * 
                     */
                    bool RestoreMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取The notification for completing audio/video remastering. This parameter is valid only if the event type is `RebuildMediaComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RebuildMediaCompleteEvent The notification for completing audio/video remastering. This parameter is valid only if the event type is `RebuildMediaComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RebuildMediaTask GetRebuildMediaCompleteEvent() const;

                    /**
                     * 设置The notification for completing audio/video remastering. This parameter is valid only if the event type is `RebuildMediaComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rebuildMediaCompleteEvent The notification for completing audio/video remastering. This parameter is valid only if the event type is `RebuildMediaComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRebuildMediaCompleteEvent(const RebuildMediaTask& _rebuildMediaCompleteEvent);

                    /**
                     * 判断参数 RebuildMediaCompleteEvent 是否已赋值
                     * @return RebuildMediaCompleteEvent 是否已赋值
                     * 
                     */
                    bool RebuildMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取The notification for completing digital watermark extraction. This parameter is valid only if `EventType` is `ExtractTraceWatermarkComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtractTraceWatermarkCompleteEvent The notification for completing digital watermark extraction. This parameter is valid only if `EventType` is `ExtractTraceWatermarkComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ExtractTraceWatermarkTask GetExtractTraceWatermarkCompleteEvent() const;

                    /**
                     * 设置The notification for completing digital watermark extraction. This parameter is valid only if `EventType` is `ExtractTraceWatermarkComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extractTraceWatermarkCompleteEvent The notification for completing digital watermark extraction. This parameter is valid only if `EventType` is `ExtractTraceWatermarkComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtractTraceWatermarkCompleteEvent(const ExtractTraceWatermarkTask& _extractTraceWatermarkCompleteEvent);

                    /**
                     * 判断参数 ExtractTraceWatermarkCompleteEvent 是否已赋值
                     * @return ExtractTraceWatermarkCompleteEvent 是否已赋值
                     * 
                     */
                    bool ExtractTraceWatermarkCompleteEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExtractCopyRightWatermarkCompleteEvent 
                     * 
                     */
                    ExtractCopyRightWatermarkTask GetExtractCopyRightWatermarkCompleteEvent() const;

                    /**
                     * 设置
                     * @param _extractCopyRightWatermarkCompleteEvent 
                     * 
                     */
                    void SetExtractCopyRightWatermarkCompleteEvent(const ExtractCopyRightWatermarkTask& _extractCopyRightWatermarkCompleteEvent);

                    /**
                     * 判断参数 ExtractCopyRightWatermarkCompleteEvent 是否已赋值
                     * @return ExtractCopyRightWatermarkCompleteEvent 是否已赋值
                     * 
                     */
                    bool ExtractCopyRightWatermarkCompleteEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReviewAudioVideoCompleteEvent 
                     * 
                     */
                    ReviewAudioVideoTask GetReviewAudioVideoCompleteEvent() const;

                    /**
                     * 设置
                     * @param _reviewAudioVideoCompleteEvent 
                     * 
                     */
                    void SetReviewAudioVideoCompleteEvent(const ReviewAudioVideoTask& _reviewAudioVideoCompleteEvent);

                    /**
                     * 判断参数 ReviewAudioVideoCompleteEvent 是否已赋值
                     * @return ReviewAudioVideoCompleteEvent 是否已赋值
                     * 
                     */
                    bool ReviewAudioVideoCompleteEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReduceMediaBitrateCompleteEvent 
                     * 
                     */
                    ReduceMediaBitrateTask GetReduceMediaBitrateCompleteEvent() const;

                    /**
                     * 设置
                     * @param _reduceMediaBitrateCompleteEvent 
                     * 
                     */
                    void SetReduceMediaBitrateCompleteEvent(const ReduceMediaBitrateTask& _reduceMediaBitrateCompleteEvent);

                    /**
                     * 判断参数 ReduceMediaBitrateCompleteEvent 是否已赋值
                     * @return ReduceMediaBitrateCompleteEvent 是否已赋值
                     * 
                     */
                    bool ReduceMediaBitrateCompleteEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return DescribeFileAttributesCompleteEvent 
                     * 
                     */
                    DescribeFileAttributesTask GetDescribeFileAttributesCompleteEvent() const;

                    /**
                     * 设置
                     * @param _describeFileAttributesCompleteEvent 
                     * 
                     */
                    void SetDescribeFileAttributesCompleteEvent(const DescribeFileAttributesTask& _describeFileAttributesCompleteEvent);

                    /**
                     * 判断参数 DescribeFileAttributesCompleteEvent 是否已赋值
                     * @return DescribeFileAttributesCompleteEvent 是否已赋值
                     * 
                     */
                    bool DescribeFileAttributesCompleteEventHasBeenSet() const;

                    /**
                     * 获取
                     * @return QualityInspectCompleteEvent 
                     * 
                     */
                    QualityInspectTask GetQualityInspectCompleteEvent() const;

                    /**
                     * 设置
                     * @param _qualityInspectCompleteEvent 
                     * 
                     */
                    void SetQualityInspectCompleteEvent(const QualityInspectTask& _qualityInspectCompleteEvent);

                    /**
                     * 判断参数 QualityInspectCompleteEvent 是否已赋值
                     * @return QualityInspectCompleteEvent 是否已赋值
                     * 
                     */
                    bool QualityInspectCompleteEventHasBeenSet() const;

                private:

                    /**
                     * Event handler. The caller must call `ConfirmEvents` to confirm that the message has been received, and the confirmation is valid for 30 seconds. After the confirmation expires, the event can be obtained again.
                     */
                    std::string m_eventHandle;
                    bool m_eventHandleHasBeenSet;

                    /**
                     * <b>Supported event types:</b>
<li>`NewFileUpload`: Video uploaded.</li>
<li>`ProcedureStateChanged`: Task flow status changed.</li>
<li>`FileDeleted`: Video deleted.</li>
<li>`RestoreMediaComplete`: Video retrieved.</li>
<li>`PullComplete`: Finished video pulling.</li>
<li>`EditMediaComplete`: Finished video editing.</li>
<li>`SplitMediaComplete`: Finished video splitting.</li>
<li>`ComposeMediaComplete`: Finished producing the media file.</li>
<li>`WechatMiniProgramPublishComplete`: Finished publishing on Weixin Mini Program.</li>
<li>`RemoveWatermark`: Watermark removed.</li>
<li>`RebuildMediaComplete`: Finished audio/video remastering.</li>
<li>`ReviewAudioVideoComplete`: Finished moderation.</li>
<li>`ExtractTraceWatermarkComplete`: Finished digital watermark extraction.</li>
<li>`DescribeFileAttributesComplete`: Finished getting file attributes.</li>
<b>v2017 task types:</b>
<li>`TranscodeComplete`: Finished video transcoding.</li>
<li>`ConcatComplete`: Finished video splicing.</li>
<li>`ClipComplete`: Finished video clipping.</li>
<li>`CreateImageSpriteComplete`: Finished image sprite generation.</li>
<li>`CreateSnapshotByTimeOffsetComplete`: Finished time point screencapturing.</li>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 
                     */
                    FileUploadTask m_fileUploadEvent;
                    bool m_fileUploadEventHasBeenSet;

                    /**
                     * 
                     */
                    ProcedureTask m_procedureStateChangeEvent;
                    bool m_procedureStateChangeEventHasBeenSet;

                    /**
                     * 
                     */
                    FileDeleteTask m_fileDeleteEvent;
                    bool m_fileDeleteEventHasBeenSet;

                    /**
                     * 
                     */
                    PullUploadTask m_pullCompleteEvent;
                    bool m_pullCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    EditMediaTask m_editMediaCompleteEvent;
                    bool m_editMediaCompleteEventHasBeenSet;

                    /**
                     * The notification for completing video splitting, which is valid if the event type is `SplitMediaComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SplitMediaTask m_splitMediaCompleteEvent;
                    bool m_splitMediaCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    ComposeMediaTask m_composeMediaCompleteEvent;
                    bool m_composeMediaCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    ClipTask2017 m_clipCompleteEvent;
                    bool m_clipCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    TranscodeTask2017 m_transcodeCompleteEvent;
                    bool m_transcodeCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    CreateImageSpriteTask2017 m_createImageSpriteCompleteEvent;
                    bool m_createImageSpriteCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    ConcatTask2017 m_concatCompleteEvent;
                    bool m_concatCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    SnapshotByTimeOffsetTask2017 m_snapshotByTimeOffsetCompleteEvent;
                    bool m_snapshotByTimeOffsetCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    WechatPublishTask m_wechatPublishCompleteEvent;
                    bool m_wechatPublishCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    WechatMiniProgramPublishTask m_wechatMiniProgramPublishCompleteEvent;
                    bool m_wechatMiniProgramPublishCompleteEventHasBeenSet;

                    /**
                     * The notification for completing watermark removal. This parameter is valid only if the event type is `RemoveWatermark`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RemoveWatermarkTask m_removeWatermarkCompleteEvent;
                    bool m_removeWatermarkCompleteEventHasBeenSet;

                    /**
                     * The notification for completing video retrieval. This parameter is valid if the event type is `RestoreMediaComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RestoreMediaTask m_restoreMediaCompleteEvent;
                    bool m_restoreMediaCompleteEventHasBeenSet;

                    /**
                     * The notification for completing audio/video remastering. This parameter is valid only if the event type is `RebuildMediaComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RebuildMediaTask m_rebuildMediaCompleteEvent;
                    bool m_rebuildMediaCompleteEventHasBeenSet;

                    /**
                     * The notification for completing digital watermark extraction. This parameter is valid only if `EventType` is `ExtractTraceWatermarkComplete`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ExtractTraceWatermarkTask m_extractTraceWatermarkCompleteEvent;
                    bool m_extractTraceWatermarkCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    ExtractCopyRightWatermarkTask m_extractCopyRightWatermarkCompleteEvent;
                    bool m_extractCopyRightWatermarkCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    ReviewAudioVideoTask m_reviewAudioVideoCompleteEvent;
                    bool m_reviewAudioVideoCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    ReduceMediaBitrateTask m_reduceMediaBitrateCompleteEvent;
                    bool m_reduceMediaBitrateCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    DescribeFileAttributesTask m_describeFileAttributesCompleteEvent;
                    bool m_describeFileAttributesCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    QualityInspectTask m_qualityInspectCompleteEvent;
                    bool m_qualityInspectCompleteEventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EVENTCONTENT_H_
