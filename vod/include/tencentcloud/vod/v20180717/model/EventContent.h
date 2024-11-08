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
#include <tencentcloud/vod/v20180717/model/QualityEnhanceTask.h>
#include <tencentcloud/vod/v20180717/model/MediaCastEvent.h>
#include <tencentcloud/vod/v20180717/model/PersistenceCompleteTask.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTask.h>


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
                     * 获取<b>Supported event types:</b><li>`NewFileUpload`: Video uploaded.</li><li>`ProcedureStateChanged`: Task flow status changed.</li><li>`FileDeleted`: Video deleted.</li><li>`RestoreMediaComplete`: Video retrieved.</li><li>`PullComplete`: Finished video pulling.</li><li>`EditMediaComplete`: Finished video editing.</li><li>`SplitMediaComplete`: Finished video splitting.</li><li>`ComposeMediaComplete`: Finished producing the media file.</li><li>`WechatMiniProgramPublishComplete`: Finished publishing on Weixin Mini Program.</li><li>`RemoveWatermark`: Watermark removed.</li><li>`RebuildMediaComplete`: Finished audio/video remastering.</li><li>`ReviewAudioVideoComplete`: Finished moderation.</li><li>`ExtractTraceWatermarkComplete`: Finished digital watermark extraction.</li><li>`DescribeFileAttributesComplete`: Finished getting file attributes.</li><li>`QualityEnhanceComplete`: FinishedQualityEnhance.</li><li>`PersistenceComplete`: Clipping persistented. </li><li>`ComplexAdaptiveDynamicStreamingComplete `: Finished complex adaptive bitrate streaming processing. </li><b>v2017 task types:</b><li>`TranscodeComplete`: Finished video transcoding.</li><li>`ConcatComplete`: Finished video splicing.</li><li>`ClipComplete`: Finished video clipping.</li><li>`CreateImageSpriteComplete`: Finished image sprite generation.</li><li>`CreateSnapshotByTimeOffsetComplete`: Finished time point screencapturing.</li>
                     * @return EventType <b>Supported event types:</b><li>`NewFileUpload`: Video uploaded.</li><li>`ProcedureStateChanged`: Task flow status changed.</li><li>`FileDeleted`: Video deleted.</li><li>`RestoreMediaComplete`: Video retrieved.</li><li>`PullComplete`: Finished video pulling.</li><li>`EditMediaComplete`: Finished video editing.</li><li>`SplitMediaComplete`: Finished video splitting.</li><li>`ComposeMediaComplete`: Finished producing the media file.</li><li>`WechatMiniProgramPublishComplete`: Finished publishing on Weixin Mini Program.</li><li>`RemoveWatermark`: Watermark removed.</li><li>`RebuildMediaComplete`: Finished audio/video remastering.</li><li>`ReviewAudioVideoComplete`: Finished moderation.</li><li>`ExtractTraceWatermarkComplete`: Finished digital watermark extraction.</li><li>`DescribeFileAttributesComplete`: Finished getting file attributes.</li><li>`QualityEnhanceComplete`: FinishedQualityEnhance.</li><li>`PersistenceComplete`: Clipping persistented. </li><li>`ComplexAdaptiveDynamicStreamingComplete `: Finished complex adaptive bitrate streaming processing. </li><b>v2017 task types:</b><li>`TranscodeComplete`: Finished video transcoding.</li><li>`ConcatComplete`: Finished video splicing.</li><li>`ClipComplete`: Finished video clipping.</li><li>`CreateImageSpriteComplete`: Finished image sprite generation.</li><li>`CreateSnapshotByTimeOffsetComplete`: Finished time point screencapturing.</li>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<b>Supported event types:</b><li>`NewFileUpload`: Video uploaded.</li><li>`ProcedureStateChanged`: Task flow status changed.</li><li>`FileDeleted`: Video deleted.</li><li>`RestoreMediaComplete`: Video retrieved.</li><li>`PullComplete`: Finished video pulling.</li><li>`EditMediaComplete`: Finished video editing.</li><li>`SplitMediaComplete`: Finished video splitting.</li><li>`ComposeMediaComplete`: Finished producing the media file.</li><li>`WechatMiniProgramPublishComplete`: Finished publishing on Weixin Mini Program.</li><li>`RemoveWatermark`: Watermark removed.</li><li>`RebuildMediaComplete`: Finished audio/video remastering.</li><li>`ReviewAudioVideoComplete`: Finished moderation.</li><li>`ExtractTraceWatermarkComplete`: Finished digital watermark extraction.</li><li>`DescribeFileAttributesComplete`: Finished getting file attributes.</li><li>`QualityEnhanceComplete`: FinishedQualityEnhance.</li><li>`PersistenceComplete`: Clipping persistented. </li><li>`ComplexAdaptiveDynamicStreamingComplete `: Finished complex adaptive bitrate streaming processing. </li><b>v2017 task types:</b><li>`TranscodeComplete`: Finished video transcoding.</li><li>`ConcatComplete`: Finished video splicing.</li><li>`ClipComplete`: Finished video clipping.</li><li>`CreateImageSpriteComplete`: Finished image sprite generation.</li><li>`CreateSnapshotByTimeOffsetComplete`: Finished time point screencapturing.</li>
                     * @param _eventType <b>Supported event types:</b><li>`NewFileUpload`: Video uploaded.</li><li>`ProcedureStateChanged`: Task flow status changed.</li><li>`FileDeleted`: Video deleted.</li><li>`RestoreMediaComplete`: Video retrieved.</li><li>`PullComplete`: Finished video pulling.</li><li>`EditMediaComplete`: Finished video editing.</li><li>`SplitMediaComplete`: Finished video splitting.</li><li>`ComposeMediaComplete`: Finished producing the media file.</li><li>`WechatMiniProgramPublishComplete`: Finished publishing on Weixin Mini Program.</li><li>`RemoveWatermark`: Watermark removed.</li><li>`RebuildMediaComplete`: Finished audio/video remastering.</li><li>`ReviewAudioVideoComplete`: Finished moderation.</li><li>`ExtractTraceWatermarkComplete`: Finished digital watermark extraction.</li><li>`DescribeFileAttributesComplete`: Finished getting file attributes.</li><li>`QualityEnhanceComplete`: FinishedQualityEnhance.</li><li>`PersistenceComplete`: Clipping persistented. </li><li>`ComplexAdaptiveDynamicStreamingComplete `: Finished complex adaptive bitrate streaming processing. </li><b>v2017 task types:</b><li>`TranscodeComplete`: Finished video transcoding.</li><li>`ConcatComplete`: Finished video splicing.</li><li>`ClipComplete`: Finished video clipping.</li><li>`CreateImageSpriteComplete`: Finished image sprite generation.</li><li>`CreateSnapshotByTimeOffsetComplete`: Finished time point screencapturing.</li>
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
                     * 获取Media uploaded event, valid when the event type is NewFileUpload.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FileUploadEvent Media uploaded event, valid when the event type is NewFileUpload.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    FileUploadTask GetFileUploadEvent() const;

                    /**
                     * 设置Media uploaded event, valid when the event type is NewFileUpload.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fileUploadEvent Media uploaded event, valid when the event type is NewFileUpload.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Task flow status changed event, valid when the event type is ProcedureStateChanged.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProcedureStateChangeEvent Task flow status changed event, valid when the event type is ProcedureStateChanged.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ProcedureTask GetProcedureStateChangeEvent() const;

                    /**
                     * 设置Task flow status changed event, valid when the event type is ProcedureStateChanged.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _procedureStateChangeEvent Task flow status changed event, valid when the event type is ProcedureStateChanged.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取File deleted event, valid when the event type is FileDeleted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FileDeleteEvent File deleted event, valid when the event type is FileDeleted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    FileDeleteTask GetFileDeleteEvent() const;

                    /**
                     * 设置File deleted event, valid when the event type is FileDeleted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fileDeleteEvent File deleted event, valid when the event type is FileDeleted.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取PullUpload completion event, valid when the event type is PullComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PullCompleteEvent PullUpload completion event, valid when the event type is PullComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    PullUploadTask GetPullCompleteEvent() const;

                    /**
                     * 设置PullUpload completion event, valid when the event type is PullComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _pullCompleteEvent PullUpload completion event, valid when the event type is PullComplete.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取EditMedia completion event, valid when the event type is EditMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EditMediaCompleteEvent EditMedia completion event, valid when the event type is EditMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    EditMediaTask GetEditMediaCompleteEvent() const;

                    /**
                     * 设置EditMedia completion event, valid when the event type is EditMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _editMediaCompleteEvent EditMedia completion event, valid when the event type is EditMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取SplitMedia completion event, valid when the event type is SplitMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SplitMediaCompleteEvent SplitMedia completion event, valid when the event type is SplitMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SplitMediaTask GetSplitMediaCompleteEvent() const;

                    /**
                     * 设置SplitMedia completion event, valid when the event type is SplitMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _splitMediaCompleteEvent SplitMedia completion event, valid when the event type is SplitMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取ComposeMedia completion event, valid when the event type is ComposeMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ComposeMediaCompleteEvent ComposeMedia completion event, valid when the event type is ComposeMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ComposeMediaTask GetComposeMediaCompleteEvent() const;

                    /**
                     * 设置ComposeMedia completion event, valid when the event type is ComposeMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _composeMediaCompleteEvent ComposeMedia completion event, valid when the event type is ComposeMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Expired.
                     * @return ClipCompleteEvent Expired.
                     * 
                     */
                    ClipTask2017 GetClipCompleteEvent() const;

                    /**
                     * 设置Expired.
                     * @param _clipCompleteEvent Expired.
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
                     * 获取Expired.
                     * @return TranscodeCompleteEvent Expired.
                     * 
                     */
                    TranscodeTask2017 GetTranscodeCompleteEvent() const;

                    /**
                     * 设置Expired.
                     * @param _transcodeCompleteEvent Expired.
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
                     * 获取Expired.
                     * @return CreateImageSpriteCompleteEvent Expired.
                     * 
                     */
                    CreateImageSpriteTask2017 GetCreateImageSpriteCompleteEvent() const;

                    /**
                     * 设置Expired.
                     * @param _createImageSpriteCompleteEvent Expired.
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
                     * 获取Expired.
                     * @return ConcatCompleteEvent Expired.
                     * 
                     */
                    ConcatTask2017 GetConcatCompleteEvent() const;

                    /**
                     * 设置Expired.
                     * @param _concatCompleteEvent Expired.
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
                     * 获取Expired.
                     * @return SnapshotByTimeOffsetCompleteEvent Expired.
                     * 
                     */
                    SnapshotByTimeOffsetTask2017 GetSnapshotByTimeOffsetCompleteEvent() const;

                    /**
                     * 设置Expired.
                     * @param _snapshotByTimeOffsetCompleteEvent Expired.
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
                     * 获取Expired.
                     * @return WechatPublishCompleteEvent Expired.
                     * 
                     */
                    WechatPublishTask GetWechatPublishCompleteEvent() const;

                    /**
                     * 设置Expired.
                     * @param _wechatPublishCompleteEvent Expired.
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
                     * 获取WechatMiniProgramPublish completion event, valid when the event type is WechatMiniProgramPublishComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WechatMiniProgramPublishCompleteEvent WechatMiniProgramPublish completion event, valid when the event type is WechatMiniProgramPublishComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    WechatMiniProgramPublishTask GetWechatMiniProgramPublishCompleteEvent() const;

                    /**
                     * 设置WechatMiniProgramPublish completion event, valid when the event type is WechatMiniProgramPublishComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _wechatMiniProgramPublishCompleteEvent WechatMiniProgramPublish completion event, valid when the event type is WechatMiniProgramPublishComplete.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取RemoveWatermark completion event, valid when the event type is RemoveWatermark.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RemoveWatermarkCompleteEvent RemoveWatermark completion event, valid when the event type is RemoveWatermark.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    RemoveWatermarkTask GetRemoveWatermarkCompleteEvent() const;

                    /**
                     * 设置RemoveWatermark completion event, valid when the event type is RemoveWatermark.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _removeWatermarkCompleteEvent RemoveWatermark completion event, valid when the event type is RemoveWatermark.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取RestoreMedia completion event, valid when the event type is RestoreMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RestoreMediaCompleteEvent RestoreMedia completion event, valid when the event type is RestoreMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    RestoreMediaTask GetRestoreMediaCompleteEvent() const;

                    /**
                     * 设置RestoreMedia completion event, valid when the event type is RestoreMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _restoreMediaCompleteEvent RestoreMedia completion event, valid when the event type is RestoreMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取RebuildMedia completion event, valid when the event type is RebuildMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RebuildMediaCompleteEvent RebuildMedia completion event, valid when the event type is RebuildMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    RebuildMediaTask GetRebuildMediaCompleteEvent() const;

                    /**
                     * 设置RebuildMedia completion event, valid when the event type is RebuildMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _rebuildMediaCompleteEvent RebuildMedia completion event, valid when the event type is RebuildMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Expired.
                     * @return ExtractTraceWatermarkCompleteEvent Expired.
                     * 
                     */
                    ExtractTraceWatermarkTask GetExtractTraceWatermarkCompleteEvent() const;

                    /**
                     * 设置Expired.
                     * @param _extractTraceWatermarkCompleteEvent Expired.
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
                     * 获取Expired.
                     * @return ExtractCopyRightWatermarkCompleteEvent Expired.
                     * 
                     */
                    ExtractCopyRightWatermarkTask GetExtractCopyRightWatermarkCompleteEvent() const;

                    /**
                     * 设置Expired.
                     * @param _extractCopyRightWatermarkCompleteEvent Expired.
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
                     * 获取ReviewAudioVideo completion event, valid when the event type is ReviewAudioVideoComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReviewAudioVideoCompleteEvent ReviewAudioVideo completion event, valid when the event type is ReviewAudioVideoComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ReviewAudioVideoTask GetReviewAudioVideoCompleteEvent() const;

                    /**
                     * 设置ReviewAudioVideo completion event, valid when the event type is ReviewAudioVideoComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _reviewAudioVideoCompleteEvent ReviewAudioVideo completion event, valid when the event type is ReviewAudioVideoComplete.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Expired.
                     * @return ReduceMediaBitrateCompleteEvent Expired.
                     * 
                     */
                    ReduceMediaBitrateTask GetReduceMediaBitrateCompleteEvent() const;

                    /**
                     * 设置Expired.
                     * @param _reduceMediaBitrateCompleteEvent Expired.
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
                     * 获取DescribeFileAttributes completion event, valid when the event type is DescribeFileAttributesComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DescribeFileAttributesCompleteEvent DescribeFileAttributes completion event, valid when the event type is DescribeFileAttributesComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    DescribeFileAttributesTask GetDescribeFileAttributesCompleteEvent() const;

                    /**
                     * 设置DescribeFileAttributes completion event, valid when the event type is DescribeFileAttributesComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _describeFileAttributesCompleteEvent DescribeFileAttributes completion event, valid when the event type is DescribeFileAttributesComplete.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取QualityInspect completion event, valid when the event type is QualityInspectComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return QualityInspectCompleteEvent QualityInspect completion event, valid when the event type is QualityInspectComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    QualityInspectTask GetQualityInspectCompleteEvent() const;

                    /**
                     * 设置QualityInspect completion event, valid when the event type is QualityInspectComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _qualityInspectCompleteEvent QualityInspect completion event, valid when the event type is QualityInspectComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetQualityInspectCompleteEvent(const QualityInspectTask& _qualityInspectCompleteEvent);

                    /**
                     * 判断参数 QualityInspectCompleteEvent 是否已赋值
                     * @return QualityInspectCompleteEvent 是否已赋值
                     * 
                     */
                    bool QualityInspectCompleteEventHasBeenSet() const;

                    /**
                     * 获取Remaster completion event, valid when the event type is QualityEnhanceComplete.
Pay attention to: this field may return null, indicating that no valid value can be obtained
                     * @return QualityEnhanceCompleteEvent Remaster completion event, valid when the event type is QualityEnhanceComplete.
Pay attention to: this field may return null, indicating that no valid value can be obtained
                     * 
                     */
                    QualityEnhanceTask GetQualityEnhanceCompleteEvent() const;

                    /**
                     * 设置Remaster completion event, valid when the event type is QualityEnhanceComplete.
Pay attention to: this field may return null, indicating that no valid value can be obtained
                     * @param _qualityEnhanceCompleteEvent Remaster completion event, valid when the event type is QualityEnhanceComplete.
Pay attention to: this field may return null, indicating that no valid value can be obtained
                     * 
                     */
                    void SetQualityEnhanceCompleteEvent(const QualityEnhanceTask& _qualityEnhanceCompleteEvent);

                    /**
                     * 判断参数 QualityEnhanceCompleteEvent 是否已赋值
                     * @return QualityEnhanceCompleteEvent 是否已赋值
                     * 
                     */
                    bool QualityEnhanceCompleteEventHasBeenSet() const;

                    /**
                     * 获取MediaCastStatus changed event, valid when the event type is MediaCastStatusChanged.
Pay attention to: this field may return null, indicating that no valid value can be obtained.
                     * @return MediaCastStatusChangedEvent MediaCastStatus changed event, valid when the event type is MediaCastStatusChanged.
Pay attention to: this field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    MediaCastEvent GetMediaCastStatusChangedEvent() const;

                    /**
                     * 设置MediaCastStatus changed event, valid when the event type is MediaCastStatusChanged.
Pay attention to: this field may return null, indicating that no valid value can be obtained.
                     * @param _mediaCastStatusChangedEvent MediaCastStatus changed event, valid when the event type is MediaCastStatusChanged.
Pay attention to: this field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMediaCastStatusChangedEvent(const MediaCastEvent& _mediaCastStatusChangedEvent);

                    /**
                     * 判断参数 MediaCastStatusChangedEvent 是否已赋值
                     * @return MediaCastStatusChangedEvent 是否已赋值
                     * 
                     */
                    bool MediaCastStatusChangedEventHasBeenSet() const;

                    /**
                     * 获取Persistence completion event, valid when the event type is PersistenceComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PersistenceCompleteEvent Persistence completion event, valid when the event type is PersistenceComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    PersistenceCompleteTask GetPersistenceCompleteEvent() const;

                    /**
                     * 设置Persistence completion event, valid when the event type is PersistenceComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _persistenceCompleteEvent Persistence completion event, valid when the event type is PersistenceComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPersistenceCompleteEvent(const PersistenceCompleteTask& _persistenceCompleteEvent);

                    /**
                     * 判断参数 PersistenceCompleteEvent 是否已赋值
                     * @return PersistenceCompleteEvent 是否已赋值
                     * 
                     */
                    bool PersistenceCompleteEventHasBeenSet() const;

                    /**
                     * 获取Complex adaptive bitrate streaming processing completion event, valid when the event type is ComplexAdaptiveDynamicStreamingComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ComplexAdaptiveDynamicStreamingCompleteEvent Complex adaptive bitrate streaming processing completion event, valid when the event type is ComplexAdaptiveDynamicStreamingComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ComplexAdaptiveDynamicStreamingTask GetComplexAdaptiveDynamicStreamingCompleteEvent() const;

                    /**
                     * 设置Complex adaptive bitrate streaming processing completion event, valid when the event type is ComplexAdaptiveDynamicStreamingComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _complexAdaptiveDynamicStreamingCompleteEvent Complex adaptive bitrate streaming processing completion event, valid when the event type is ComplexAdaptiveDynamicStreamingComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetComplexAdaptiveDynamicStreamingCompleteEvent(const ComplexAdaptiveDynamicStreamingTask& _complexAdaptiveDynamicStreamingCompleteEvent);

                    /**
                     * 判断参数 ComplexAdaptiveDynamicStreamingCompleteEvent 是否已赋值
                     * @return ComplexAdaptiveDynamicStreamingCompleteEvent 是否已赋值
                     * 
                     */
                    bool ComplexAdaptiveDynamicStreamingCompleteEventHasBeenSet() const;

                private:

                    /**
                     * Event handler. The caller must call `ConfirmEvents` to confirm that the message has been received, and the confirmation is valid for 30 seconds. After the confirmation expires, the event can be obtained again.
                     */
                    std::string m_eventHandle;
                    bool m_eventHandleHasBeenSet;

                    /**
                     * <b>Supported event types:</b><li>`NewFileUpload`: Video uploaded.</li><li>`ProcedureStateChanged`: Task flow status changed.</li><li>`FileDeleted`: Video deleted.</li><li>`RestoreMediaComplete`: Video retrieved.</li><li>`PullComplete`: Finished video pulling.</li><li>`EditMediaComplete`: Finished video editing.</li><li>`SplitMediaComplete`: Finished video splitting.</li><li>`ComposeMediaComplete`: Finished producing the media file.</li><li>`WechatMiniProgramPublishComplete`: Finished publishing on Weixin Mini Program.</li><li>`RemoveWatermark`: Watermark removed.</li><li>`RebuildMediaComplete`: Finished audio/video remastering.</li><li>`ReviewAudioVideoComplete`: Finished moderation.</li><li>`ExtractTraceWatermarkComplete`: Finished digital watermark extraction.</li><li>`DescribeFileAttributesComplete`: Finished getting file attributes.</li><li>`QualityEnhanceComplete`: FinishedQualityEnhance.</li><li>`PersistenceComplete`: Clipping persistented. </li><li>`ComplexAdaptiveDynamicStreamingComplete `: Finished complex adaptive bitrate streaming processing. </li><b>v2017 task types:</b><li>`TranscodeComplete`: Finished video transcoding.</li><li>`ConcatComplete`: Finished video splicing.</li><li>`ClipComplete`: Finished video clipping.</li><li>`CreateImageSpriteComplete`: Finished image sprite generation.</li><li>`CreateSnapshotByTimeOffsetComplete`: Finished time point screencapturing.</li>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Media uploaded event, valid when the event type is NewFileUpload.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    FileUploadTask m_fileUploadEvent;
                    bool m_fileUploadEventHasBeenSet;

                    /**
                     * Task flow status changed event, valid when the event type is ProcedureStateChanged.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ProcedureTask m_procedureStateChangeEvent;
                    bool m_procedureStateChangeEventHasBeenSet;

                    /**
                     * File deleted event, valid when the event type is FileDeleted.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    FileDeleteTask m_fileDeleteEvent;
                    bool m_fileDeleteEventHasBeenSet;

                    /**
                     * PullUpload completion event, valid when the event type is PullComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    PullUploadTask m_pullCompleteEvent;
                    bool m_pullCompleteEventHasBeenSet;

                    /**
                     * EditMedia completion event, valid when the event type is EditMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    EditMediaTask m_editMediaCompleteEvent;
                    bool m_editMediaCompleteEventHasBeenSet;

                    /**
                     * SplitMedia completion event, valid when the event type is SplitMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SplitMediaTask m_splitMediaCompleteEvent;
                    bool m_splitMediaCompleteEventHasBeenSet;

                    /**
                     * ComposeMedia completion event, valid when the event type is ComposeMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ComposeMediaTask m_composeMediaCompleteEvent;
                    bool m_composeMediaCompleteEventHasBeenSet;

                    /**
                     * Expired.
                     */
                    ClipTask2017 m_clipCompleteEvent;
                    bool m_clipCompleteEventHasBeenSet;

                    /**
                     * Expired.
                     */
                    TranscodeTask2017 m_transcodeCompleteEvent;
                    bool m_transcodeCompleteEventHasBeenSet;

                    /**
                     * Expired.
                     */
                    CreateImageSpriteTask2017 m_createImageSpriteCompleteEvent;
                    bool m_createImageSpriteCompleteEventHasBeenSet;

                    /**
                     * Expired.
                     */
                    ConcatTask2017 m_concatCompleteEvent;
                    bool m_concatCompleteEventHasBeenSet;

                    /**
                     * Expired.
                     */
                    SnapshotByTimeOffsetTask2017 m_snapshotByTimeOffsetCompleteEvent;
                    bool m_snapshotByTimeOffsetCompleteEventHasBeenSet;

                    /**
                     * Expired.
                     */
                    WechatPublishTask m_wechatPublishCompleteEvent;
                    bool m_wechatPublishCompleteEventHasBeenSet;

                    /**
                     * WechatMiniProgramPublish completion event, valid when the event type is WechatMiniProgramPublishComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    WechatMiniProgramPublishTask m_wechatMiniProgramPublishCompleteEvent;
                    bool m_wechatMiniProgramPublishCompleteEventHasBeenSet;

                    /**
                     * RemoveWatermark completion event, valid when the event type is RemoveWatermark.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    RemoveWatermarkTask m_removeWatermarkCompleteEvent;
                    bool m_removeWatermarkCompleteEventHasBeenSet;

                    /**
                     * RestoreMedia completion event, valid when the event type is RestoreMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    RestoreMediaTask m_restoreMediaCompleteEvent;
                    bool m_restoreMediaCompleteEventHasBeenSet;

                    /**
                     * RebuildMedia completion event, valid when the event type is RebuildMediaComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    RebuildMediaTask m_rebuildMediaCompleteEvent;
                    bool m_rebuildMediaCompleteEventHasBeenSet;

                    /**
                     * Expired.
                     */
                    ExtractTraceWatermarkTask m_extractTraceWatermarkCompleteEvent;
                    bool m_extractTraceWatermarkCompleteEventHasBeenSet;

                    /**
                     * Expired.
                     */
                    ExtractCopyRightWatermarkTask m_extractCopyRightWatermarkCompleteEvent;
                    bool m_extractCopyRightWatermarkCompleteEventHasBeenSet;

                    /**
                     * ReviewAudioVideo completion event, valid when the event type is ReviewAudioVideoComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ReviewAudioVideoTask m_reviewAudioVideoCompleteEvent;
                    bool m_reviewAudioVideoCompleteEventHasBeenSet;

                    /**
                     * Expired.
                     */
                    ReduceMediaBitrateTask m_reduceMediaBitrateCompleteEvent;
                    bool m_reduceMediaBitrateCompleteEventHasBeenSet;

                    /**
                     * DescribeFileAttributes completion event, valid when the event type is DescribeFileAttributesComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    DescribeFileAttributesTask m_describeFileAttributesCompleteEvent;
                    bool m_describeFileAttributesCompleteEventHasBeenSet;

                    /**
                     * QualityInspect completion event, valid when the event type is QualityInspectComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    QualityInspectTask m_qualityInspectCompleteEvent;
                    bool m_qualityInspectCompleteEventHasBeenSet;

                    /**
                     * Remaster completion event, valid when the event type is QualityEnhanceComplete.
Pay attention to: this field may return null, indicating that no valid value can be obtained
                     */
                    QualityEnhanceTask m_qualityEnhanceCompleteEvent;
                    bool m_qualityEnhanceCompleteEventHasBeenSet;

                    /**
                     * MediaCastStatus changed event, valid when the event type is MediaCastStatusChanged.
Pay attention to: this field may return null, indicating that no valid value can be obtained.
                     */
                    MediaCastEvent m_mediaCastStatusChangedEvent;
                    bool m_mediaCastStatusChangedEventHasBeenSet;

                    /**
                     * Persistence completion event, valid when the event type is PersistenceComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    PersistenceCompleteTask m_persistenceCompleteEvent;
                    bool m_persistenceCompleteEventHasBeenSet;

                    /**
                     * Complex adaptive bitrate streaming processing completion event, valid when the event type is ComplexAdaptiveDynamicStreamingComplete.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ComplexAdaptiveDynamicStreamingTask m_complexAdaptiveDynamicStreamingCompleteEvent;
                    bool m_complexAdaptiveDynamicStreamingCompleteEventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EVENTCONTENT_H_
