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
#include <tencentcloud/vod/v20180717/model/ProcessMediaByMPS.h>
#include <tencentcloud/vod/v20180717/model/AigcImageTask.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTask.h>
#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcImageTask.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncTask.h>


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
                     * 获取Event handler. The caller must call ConfirmEvents to acknowledge the message has been received. Confirmed Valid Time is 30 seconds. After expiration, the event can be retrieved again.
                     * @return EventHandle Event handler. The caller must call ConfirmEvents to acknowledge the message has been received. Confirmed Valid Time is 30 seconds. After expiration, the event can be retrieved again.
                     * 
                     */
                    std::string GetEventHandle() const;

                    /**
                     * 设置Event handler. The caller must call ConfirmEvents to acknowledge the message has been received. Confirmed Valid Time is 30 seconds. After expiration, the event can be retrieved again.
                     * @param _eventHandle Event handler. The caller must call ConfirmEvents to acknowledge the message has been received. Confirmed Valid Time is 30 seconds. After expiration, the event can be retrieved again.
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
<li>NewFileUpload: Video upload completed;</li>
<li>ProcedureStateChanged: Task flow status change.</li>
<li>FileDeleted: Video deletion completed;</li>
<li>RestoreMediaComplete: Video retrieval completion;</li>
<li>PullComplete: Video conversion pull completed.</li>
<li>EditMediaComplete: Video editing completed;</li>
<li>SplitMediaComplete: Video splitting completed;</li>
<li>ComposeMediaComplete: Media file creation completion;</li>
<li>WechatMiniProgramPublishComplete: WeChat Mini Program Publishing Completed.</li>
<li>RemoveWatermark: Intelligent watermark removal completion.</li>
<li>RebuildMediaComplete: Audio and video quality rebirth completion event (This is not recommended).</li>
<li>ReviewAudioVideoComplete: Audio/video moderation completed;</li>
<li>ExtractTraceWatermarkComplete: Traceability watermark extraction completed;</li>
<li>ExtractCopyRightWatermarkComplete: Extracting copyright watermark completion.</li>
<li>DescribeFileAttributesComplete: File attribute acquisition completion.</li>
<li>QualityInspectComplete: Audio and video quality inspection completed;</li>
<li>QualityEnhanceComplete: Audio and video quality rebirth task completion;</li>
<li>PersistenceComplete: Edit completed.</li>
<li>ComplexAdaptiveDynamicStreamingComplete: complex adaptive bitstream task completed.</li>
<li>ProcessMediaByMPSComplete: MPS video processing is completed.</li>
<li>AigcImageTaskComplete: AIGC image generation task complete.</li>
<li>AigcVideoTaskComplete: AIGC video generation task completed.</li>
<b>Event types compatible with the 2017 version:</b>
<li>TranscodeComplete: video transcoding completion;</li>
<li>ConcatComplete: Video splicing completion.</li>
<li>ClipComplete: Video editing completed;</li>
<li>CreateImageSpriteComplete: Video thumbnail capture completion.</li>
<li>CreateSnapshotByTimeOffsetComplete: Video screenshot by time point.</li>
                     * @return EventType <b>Supported event types:</b>
<li>NewFileUpload: Video upload completed;</li>
<li>ProcedureStateChanged: Task flow status change.</li>
<li>FileDeleted: Video deletion completed;</li>
<li>RestoreMediaComplete: Video retrieval completion;</li>
<li>PullComplete: Video conversion pull completed.</li>
<li>EditMediaComplete: Video editing completed;</li>
<li>SplitMediaComplete: Video splitting completed;</li>
<li>ComposeMediaComplete: Media file creation completion;</li>
<li>WechatMiniProgramPublishComplete: WeChat Mini Program Publishing Completed.</li>
<li>RemoveWatermark: Intelligent watermark removal completion.</li>
<li>RebuildMediaComplete: Audio and video quality rebirth completion event (This is not recommended).</li>
<li>ReviewAudioVideoComplete: Audio/video moderation completed;</li>
<li>ExtractTraceWatermarkComplete: Traceability watermark extraction completed;</li>
<li>ExtractCopyRightWatermarkComplete: Extracting copyright watermark completion.</li>
<li>DescribeFileAttributesComplete: File attribute acquisition completion.</li>
<li>QualityInspectComplete: Audio and video quality inspection completed;</li>
<li>QualityEnhanceComplete: Audio and video quality rebirth task completion;</li>
<li>PersistenceComplete: Edit completed.</li>
<li>ComplexAdaptiveDynamicStreamingComplete: complex adaptive bitstream task completed.</li>
<li>ProcessMediaByMPSComplete: MPS video processing is completed.</li>
<li>AigcImageTaskComplete: AIGC image generation task complete.</li>
<li>AigcVideoTaskComplete: AIGC video generation task completed.</li>
<b>Event types compatible with the 2017 version:</b>
<li>TranscodeComplete: video transcoding completion;</li>
<li>ConcatComplete: Video splicing completion.</li>
<li>ClipComplete: Video editing completed;</li>
<li>CreateImageSpriteComplete: Video thumbnail capture completion.</li>
<li>CreateSnapshotByTimeOffsetComplete: Video screenshot by time point.</li>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<b>Supported event types:</b>
<li>NewFileUpload: Video upload completed;</li>
<li>ProcedureStateChanged: Task flow status change.</li>
<li>FileDeleted: Video deletion completed;</li>
<li>RestoreMediaComplete: Video retrieval completion;</li>
<li>PullComplete: Video conversion pull completed.</li>
<li>EditMediaComplete: Video editing completed;</li>
<li>SplitMediaComplete: Video splitting completed;</li>
<li>ComposeMediaComplete: Media file creation completion;</li>
<li>WechatMiniProgramPublishComplete: WeChat Mini Program Publishing Completed.</li>
<li>RemoveWatermark: Intelligent watermark removal completion.</li>
<li>RebuildMediaComplete: Audio and video quality rebirth completion event (This is not recommended).</li>
<li>ReviewAudioVideoComplete: Audio/video moderation completed;</li>
<li>ExtractTraceWatermarkComplete: Traceability watermark extraction completed;</li>
<li>ExtractCopyRightWatermarkComplete: Extracting copyright watermark completion.</li>
<li>DescribeFileAttributesComplete: File attribute acquisition completion.</li>
<li>QualityInspectComplete: Audio and video quality inspection completed;</li>
<li>QualityEnhanceComplete: Audio and video quality rebirth task completion;</li>
<li>PersistenceComplete: Edit completed.</li>
<li>ComplexAdaptiveDynamicStreamingComplete: complex adaptive bitstream task completed.</li>
<li>ProcessMediaByMPSComplete: MPS video processing is completed.</li>
<li>AigcImageTaskComplete: AIGC image generation task complete.</li>
<li>AigcVideoTaskComplete: AIGC video generation task completed.</li>
<b>Event types compatible with the 2017 version:</b>
<li>TranscodeComplete: video transcoding completion;</li>
<li>ConcatComplete: Video splicing completion.</li>
<li>ClipComplete: Video editing completed;</li>
<li>CreateImageSpriteComplete: Video thumbnail capture completion.</li>
<li>CreateSnapshotByTimeOffsetComplete: Video screenshot by time point.</li>
                     * @param _eventType <b>Supported event types:</b>
<li>NewFileUpload: Video upload completed;</li>
<li>ProcedureStateChanged: Task flow status change.</li>
<li>FileDeleted: Video deletion completed;</li>
<li>RestoreMediaComplete: Video retrieval completion;</li>
<li>PullComplete: Video conversion pull completed.</li>
<li>EditMediaComplete: Video editing completed;</li>
<li>SplitMediaComplete: Video splitting completed;</li>
<li>ComposeMediaComplete: Media file creation completion;</li>
<li>WechatMiniProgramPublishComplete: WeChat Mini Program Publishing Completed.</li>
<li>RemoveWatermark: Intelligent watermark removal completion.</li>
<li>RebuildMediaComplete: Audio and video quality rebirth completion event (This is not recommended).</li>
<li>ReviewAudioVideoComplete: Audio/video moderation completed;</li>
<li>ExtractTraceWatermarkComplete: Traceability watermark extraction completed;</li>
<li>ExtractCopyRightWatermarkComplete: Extracting copyright watermark completion.</li>
<li>DescribeFileAttributesComplete: File attribute acquisition completion.</li>
<li>QualityInspectComplete: Audio and video quality inspection completed;</li>
<li>QualityEnhanceComplete: Audio and video quality rebirth task completion;</li>
<li>PersistenceComplete: Edit completed.</li>
<li>ComplexAdaptiveDynamicStreamingComplete: complex adaptive bitstream task completed.</li>
<li>ProcessMediaByMPSComplete: MPS video processing is completed.</li>
<li>AigcImageTaskComplete: AIGC image generation task complete.</li>
<li>AigcVideoTaskComplete: AIGC video generation task completed.</li>
<b>Event types compatible with the 2017 version:</b>
<li>TranscodeComplete: video transcoding completion;</li>
<li>ConcatComplete: Video splicing completion.</li>
<li>ClipComplete: Video editing completed;</li>
<li>CreateImageSpriteComplete: Video thumbnail capture completion.</li>
<li>CreateSnapshotByTimeOffsetComplete: Video screenshot by time point.</li>
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
                     * 获取Video upload completion event. Valid when the event type is NewFileUpload.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileUploadEvent Video upload completion event. Valid when the event type is NewFileUpload.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FileUploadTask GetFileUploadEvent() const;

                    /**
                     * 设置Video upload completion event. Valid when the event type is NewFileUpload.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileUploadEvent Video upload completion event. Valid when the event type is NewFileUpload.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task flow status change event. Valid when the event type is ProcedureStateChanged.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcedureStateChangeEvent Task flow status change event. Valid when the event type is ProcedureStateChanged.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ProcedureTask GetProcedureStateChangeEvent() const;

                    /**
                     * 设置Task flow status change event. Valid when the event type is ProcedureStateChanged.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _procedureStateChangeEvent Task flow status change event. Valid when the event type is ProcedureStateChanged.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取File deletion event. Valid when the event type is FileDeleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileDeleteEvent File deletion event. Valid when the event type is FileDeleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FileDeleteTask GetFileDeleteEvent() const;

                    /**
                     * 设置File deletion event. Valid when the event type is FileDeleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileDeleteEvent File deletion event. Valid when the event type is FileDeleted.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Video pull completion event. Valid when the event type is PullComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PullCompleteEvent Video pull completion event. Valid when the event type is PullComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PullUploadTask GetPullCompleteEvent() const;

                    /**
                     * 设置Video pull completion event. Valid when the event type is PullComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pullCompleteEvent Video pull completion event. Valid when the event type is PullComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Video editing completion event. Valid when the event type is EditMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EditMediaCompleteEvent Video editing completion event. Valid when the event type is EditMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    EditMediaTask GetEditMediaCompleteEvent() const;

                    /**
                     * 设置Video editing completion event. Valid when the event type is EditMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _editMediaCompleteEvent Video editing completion event. Valid when the event type is EditMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Video splitting completion event. Valid when the event type is SplitMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SplitMediaCompleteEvent Video splitting completion event. Valid when the event type is SplitMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SplitMediaTask GetSplitMediaCompleteEvent() const;

                    /**
                     * 设置Video splitting completion event. Valid when the event type is SplitMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _splitMediaCompleteEvent Video splitting completion event. Valid when the event type is SplitMediaComplete.
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
                     * 获取Media file creation task completion event. Valid when the event type is ComposeMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComposeMediaCompleteEvent Media file creation task completion event. Valid when the event type is ComposeMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ComposeMediaTask GetComposeMediaCompleteEvent() const;

                    /**
                     * 设置Media file creation task completion event. Valid when the event type is ComposeMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _composeMediaCompleteEvent Media file creation task completion event. Valid when the event type is ComposeMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Video editing completion event. Valid when the event type is ClipComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClipCompleteEvent Video editing completion event. Valid when the event type is ClipComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ClipTask2017 GetClipCompleteEvent() const;

                    /**
                     * 设置Video editing completion event. Valid when the event type is ClipComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clipCompleteEvent Video editing completion event. Valid when the event type is ClipComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Video transcoding completion event, valid when the event type is TranscodeComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranscodeCompleteEvent Video transcoding completion event, valid when the event type is TranscodeComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TranscodeTask2017 GetTranscodeCompleteEvent() const;

                    /**
                     * 设置Video transcoding completion event, valid when the event type is TranscodeComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transcodeCompleteEvent Video transcoding completion event, valid when the event type is TranscodeComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Video thumbnail capture completion event. Valid when the event type is CreateImageSpriteComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateImageSpriteCompleteEvent Video thumbnail capture completion event. Valid when the event type is CreateImageSpriteComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CreateImageSpriteTask2017 GetCreateImageSpriteCompleteEvent() const;

                    /**
                     * 设置Video thumbnail capture completion event. Valid when the event type is CreateImageSpriteComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createImageSpriteCompleteEvent Video thumbnail capture completion event. Valid when the event type is CreateImageSpriteComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Video splicing completion event. Valid when the event type is ConcatComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConcatCompleteEvent Video splicing completion event. Valid when the event type is ConcatComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ConcatTask2017 GetConcatCompleteEvent() const;

                    /**
                     * 设置Video splicing completion event. Valid when the event type is ConcatComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _concatCompleteEvent Video splicing completion event. Valid when the event type is ConcatComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Video screenshot by time point completion event. Valid when the event type is CreateSnapshotByTimeOffsetComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotByTimeOffsetCompleteEvent Video screenshot by time point completion event. Valid when the event type is CreateSnapshotByTimeOffsetComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SnapshotByTimeOffsetTask2017 GetSnapshotByTimeOffsetCompleteEvent() const;

                    /**
                     * 设置Video screenshot by time point completion event. Valid when the event type is CreateSnapshotByTimeOffsetComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _snapshotByTimeOffsetCompleteEvent Video screenshot by time point completion event. Valid when the event type is CreateSnapshotByTimeOffsetComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取WeChat Publishing Completion Event. Valid when the event type is WechatPublishComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WechatPublishCompleteEvent WeChat Publishing Completion Event. Valid when the event type is WechatPublishComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    WechatPublishTask GetWechatPublishCompleteEvent() const;

                    /**
                     * 设置WeChat Publishing Completion Event. Valid when the event type is WechatPublishComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _wechatPublishCompleteEvent WeChat Publishing Completion Event. Valid when the event type is WechatPublishComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取WeChat Mini Program Publishing Task Completion Event. Valid when the event type is WechatMiniProgramPublishComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WechatMiniProgramPublishCompleteEvent WeChat Mini Program Publishing Task Completion Event. Valid when the event type is WechatMiniProgramPublishComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    WechatMiniProgramPublishTask GetWechatMiniProgramPublishCompleteEvent() const;

                    /**
                     * 设置WeChat Mini Program Publishing Task Completion Event. Valid when the event type is WechatMiniProgramPublishComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _wechatMiniProgramPublishCompleteEvent WeChat Mini Program Publishing Task Completion Event. Valid when the event type is WechatMiniProgramPublishComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Intelligent Watermark Removal Completion Event is valid when the event type is RemoveWatermark.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RemoveWatermarkCompleteEvent Intelligent Watermark Removal Completion Event is valid when the event type is RemoveWatermark.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RemoveWatermarkTask GetRemoveWatermarkCompleteEvent() const;

                    /**
                     * 设置Intelligent Watermark Removal Completion Event is valid when the event type is RemoveWatermark.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _removeWatermarkCompleteEvent Intelligent Watermark Removal Completion Event is valid when the event type is RemoveWatermark.
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
                     * 获取Video retrieval completion event. Valid when the event type is RestoreMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RestoreMediaCompleteEvent Video retrieval completion event. Valid when the event type is RestoreMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RestoreMediaTask GetRestoreMediaCompleteEvent() const;

                    /**
                     * 设置Video retrieval completion event. Valid when the event type is RestoreMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _restoreMediaCompleteEvent Video retrieval completion event. Valid when the event type is RestoreMediaComplete.
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
                     * 获取Audio and video quality rebirth completion event. Valid when the event type is RebuildMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RebuildMediaCompleteEvent Audio and video quality rebirth completion event. Valid when the event type is RebuildMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RebuildMediaTask GetRebuildMediaCompleteEvent() const;

                    /**
                     * 设置Audio and video quality rebirth completion event. Valid when the event type is RebuildMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rebuildMediaCompleteEvent Audio and video quality rebirth completion event. Valid when the event type is RebuildMediaComplete.
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
                     * 获取Traceability watermark extraction completion event. Valid when the event type is ExtractTraceWatermarkComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtractTraceWatermarkCompleteEvent Traceability watermark extraction completion event. Valid when the event type is ExtractTraceWatermarkComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ExtractTraceWatermarkTask GetExtractTraceWatermarkCompleteEvent() const;

                    /**
                     * 设置Traceability watermark extraction completion event. Valid when the event type is ExtractTraceWatermarkComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extractTraceWatermarkCompleteEvent Traceability watermark extraction completion event. Valid when the event type is ExtractTraceWatermarkComplete.
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
                     * 获取Copyright watermark extraction completion event. Valid when the event type is ExtractCopyRightWatermarkComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtractCopyRightWatermarkCompleteEvent Copyright watermark extraction completion event. Valid when the event type is ExtractCopyRightWatermarkComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ExtractCopyRightWatermarkTask GetExtractCopyRightWatermarkCompleteEvent() const;

                    /**
                     * 设置Copyright watermark extraction completion event. Valid when the event type is ExtractCopyRightWatermarkComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extractCopyRightWatermarkCompleteEvent Copyright watermark extraction completion event. Valid when the event type is ExtractCopyRightWatermarkComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Audio/video moderation completed event. Valid when the event type is ReviewAudioVideoComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReviewAudioVideoCompleteEvent Audio/video moderation completed event. Valid when the event type is ReviewAudioVideoComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ReviewAudioVideoTask GetReviewAudioVideoCompleteEvent() const;

                    /**
                     * 设置Audio/video moderation completed event. Valid when the event type is ReviewAudioVideoComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reviewAudioVideoCompleteEvent Audio/video moderation completed event. Valid when the event type is ReviewAudioVideoComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取This field is invalid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReduceMediaBitrateCompleteEvent This field is invalid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ReduceMediaBitrateTask GetReduceMediaBitrateCompleteEvent() const;

                    /**
                     * 设置This field is invalid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reduceMediaBitrateCompleteEvent This field is invalid.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取File attribute acquisition completion event. Valid when the event type is DescribeFileAttributesComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DescribeFileAttributesCompleteEvent File attribute acquisition completion event. Valid when the event type is DescribeFileAttributesComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DescribeFileAttributesTask GetDescribeFileAttributesCompleteEvent() const;

                    /**
                     * 设置File attribute acquisition completion event. Valid when the event type is DescribeFileAttributesComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _describeFileAttributesCompleteEvent File attribute acquisition completion event. Valid when the event type is DescribeFileAttributesComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Audio and video quality detection completion event. Valid when the event type is QualityInspectComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QualityInspectCompleteEvent Audio and video quality detection completion event. Valid when the event type is QualityInspectComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    QualityInspectTask GetQualityInspectCompleteEvent() const;

                    /**
                     * 设置Audio and video quality detection completion event. Valid when the event type is QualityInspectComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qualityInspectCompleteEvent Audio and video quality detection completion event. Valid when the event type is QualityInspectComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Audio and video quality rebirth completion event. Valid when the event type is QualityEnhanceComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QualityEnhanceCompleteEvent Audio and video quality rebirth completion event. Valid when the event type is QualityEnhanceComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    QualityEnhanceTask GetQualityEnhanceCompleteEvent() const;

                    /**
                     * 设置Audio and video quality rebirth completion event. Valid when the event type is QualityEnhanceComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qualityEnhanceCompleteEvent Audio and video quality rebirth completion event. Valid when the event type is QualityEnhanceComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Editing solidification completion event. Valid when the event type is PersistenceComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PersistenceCompleteEvent Editing solidification completion event. Valid when the event type is PersistenceComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PersistenceCompleteTask GetPersistenceCompleteEvent() const;

                    /**
                     * 设置Editing solidification completion event. Valid when the event type is PersistenceComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _persistenceCompleteEvent Editing solidification completion event. Valid when the event type is PersistenceComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Adaptive bitrate task information, valid only when EventType is ComplexAdaptiveDynamicStreamingComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComplexAdaptiveDynamicStreamingCompleteEvent Adaptive bitrate task information, valid only when EventType is ComplexAdaptiveDynamicStreamingComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ComplexAdaptiveDynamicStreamingTask GetComplexAdaptiveDynamicStreamingCompleteEvent() const;

                    /**
                     * 设置Adaptive bitrate task information, valid only when EventType is ComplexAdaptiveDynamicStreamingComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _complexAdaptiveDynamicStreamingCompleteEvent Adaptive bitrate task information, valid only when EventType is ComplexAdaptiveDynamicStreamingComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetComplexAdaptiveDynamicStreamingCompleteEvent(const ComplexAdaptiveDynamicStreamingTask& _complexAdaptiveDynamicStreamingCompleteEvent);

                    /**
                     * 判断参数 ComplexAdaptiveDynamicStreamingCompleteEvent 是否已赋值
                     * @return ComplexAdaptiveDynamicStreamingCompleteEvent 是否已赋值
                     * 
                     */
                    bool ComplexAdaptiveDynamicStreamingCompleteEventHasBeenSet() const;

                    /**
                     * 获取MPS video processing task information. Valid only when EventType is ProcessMediaByMPSComplete.
                     * @return ProcessMediaByMPSCompleteEvent MPS video processing task information. Valid only when EventType is ProcessMediaByMPSComplete.
                     * 
                     */
                    ProcessMediaByMPS GetProcessMediaByMPSCompleteEvent() const;

                    /**
                     * 设置MPS video processing task information. Valid only when EventType is ProcessMediaByMPSComplete.
                     * @param _processMediaByMPSCompleteEvent MPS video processing task information. Valid only when EventType is ProcessMediaByMPSComplete.
                     * 
                     */
                    void SetProcessMediaByMPSCompleteEvent(const ProcessMediaByMPS& _processMediaByMPSCompleteEvent);

                    /**
                     * 判断参数 ProcessMediaByMPSCompleteEvent 是否已赋值
                     * @return ProcessMediaByMPSCompleteEvent 是否已赋值
                     * 
                     */
                    bool ProcessMediaByMPSCompleteEventHasBeenSet() const;

                    /**
                     * 获取AIGC image generation task info. Valid only when EventType is AigcImageTaskComplete.
                     * @return AigcImageCompleteEvent AIGC image generation task info. Valid only when EventType is AigcImageTaskComplete.
                     * 
                     */
                    AigcImageTask GetAigcImageCompleteEvent() const;

                    /**
                     * 设置AIGC image generation task info. Valid only when EventType is AigcImageTaskComplete.
                     * @param _aigcImageCompleteEvent AIGC image generation task info. Valid only when EventType is AigcImageTaskComplete.
                     * 
                     */
                    void SetAigcImageCompleteEvent(const AigcImageTask& _aigcImageCompleteEvent);

                    /**
                     * 判断参数 AigcImageCompleteEvent 是否已赋值
                     * @return AigcImageCompleteEvent 是否已赋值
                     * 
                     */
                    bool AigcImageCompleteEventHasBeenSet() const;

                    /**
                     * 获取AIGC video task info. Valid only when EventType is AigcVideoTaskComplete.
                     * @return AigcVideoCompleteEvent AIGC video task info. Valid only when EventType is AigcVideoTaskComplete.
                     * 
                     */
                    AigcVideoTask GetAigcVideoCompleteEvent() const;

                    /**
                     * 设置AIGC video task info. Valid only when EventType is AigcVideoTaskComplete.
                     * @param _aigcVideoCompleteEvent AIGC video task info. Valid only when EventType is AigcVideoTaskComplete.
                     * 
                     */
                    void SetAigcVideoCompleteEvent(const AigcVideoTask& _aigcVideoCompleteEvent);

                    /**
                     * 判断参数 AigcVideoCompleteEvent 是否已赋值
                     * @return AigcVideoCompleteEvent 是否已赋值
                     * 
                     */
                    bool AigcVideoCompleteEventHasBeenSet() const;

                    /**
                     * 获取Extract digital watermark information. Valid at that time only when EventType is ExtractBlindWatermarkComplete.
                     * @return ExtractBlindWatermarkComplete Extract digital watermark information. Valid at that time only when EventType is ExtractBlindWatermarkComplete.
                     * 
                     */
                    ExtractBlindWatermarkTask GetExtractBlindWatermarkComplete() const;

                    /**
                     * 设置Extract digital watermark information. Valid at that time only when EventType is ExtractBlindWatermarkComplete.
                     * @param _extractBlindWatermarkComplete Extract digital watermark information. Valid at that time only when EventType is ExtractBlindWatermarkComplete.
                     * 
                     */
                    void SetExtractBlindWatermarkComplete(const ExtractBlindWatermarkTask& _extractBlindWatermarkComplete);

                    /**
                     * 判断参数 ExtractBlindWatermarkComplete 是否已赋值
                     * @return ExtractBlindWatermarkComplete 是否已赋值
                     * 
                     */
                    bool ExtractBlindWatermarkCompleteHasBeenSet() const;

                    /**
                     * 获取AIGC scenario-based image generation task info, valid only when EventType is SceneAigcImageCompleteEvent.
                     * @return SceneAigcImageCompleteEvent AIGC scenario-based image generation task info, valid only when EventType is SceneAigcImageCompleteEvent.
                     * 
                     */
                    SceneAigcImageTask GetSceneAigcImageCompleteEvent() const;

                    /**
                     * 设置AIGC scenario-based image generation task info, valid only when EventType is SceneAigcImageCompleteEvent.
                     * @param _sceneAigcImageCompleteEvent AIGC scenario-based image generation task info, valid only when EventType is SceneAigcImageCompleteEvent.
                     * 
                     */
                    void SetSceneAigcImageCompleteEvent(const SceneAigcImageTask& _sceneAigcImageCompleteEvent);

                    /**
                     * 判断参数 SceneAigcImageCompleteEvent 是否已赋值
                     * @return SceneAigcImageCompleteEvent 是否已赋值
                     * 
                     */
                    bool SceneAigcImageCompleteEventHasBeenSet() const;

                    /**
                     * 获取Image asynchronous task processing info, valid only when EventType is ProcessImageAsyncCompleteEvent.
                     * @return ProcessImageAsyncCompleteEvent Image asynchronous task processing info, valid only when EventType is ProcessImageAsyncCompleteEvent.
                     * 
                     */
                    ProcessImageAsyncTask GetProcessImageAsyncCompleteEvent() const;

                    /**
                     * 设置Image asynchronous task processing info, valid only when EventType is ProcessImageAsyncCompleteEvent.
                     * @param _processImageAsyncCompleteEvent Image asynchronous task processing info, valid only when EventType is ProcessImageAsyncCompleteEvent.
                     * 
                     */
                    void SetProcessImageAsyncCompleteEvent(const ProcessImageAsyncTask& _processImageAsyncCompleteEvent);

                    /**
                     * 判断参数 ProcessImageAsyncCompleteEvent 是否已赋值
                     * @return ProcessImageAsyncCompleteEvent 是否已赋值
                     * 
                     */
                    bool ProcessImageAsyncCompleteEventHasBeenSet() const;

                private:

                    /**
                     * Event handler. The caller must call ConfirmEvents to acknowledge the message has been received. Confirmed Valid Time is 30 seconds. After expiration, the event can be retrieved again.
                     */
                    std::string m_eventHandle;
                    bool m_eventHandleHasBeenSet;

                    /**
                     * <b>Supported event types:</b>
<li>NewFileUpload: Video upload completed;</li>
<li>ProcedureStateChanged: Task flow status change.</li>
<li>FileDeleted: Video deletion completed;</li>
<li>RestoreMediaComplete: Video retrieval completion;</li>
<li>PullComplete: Video conversion pull completed.</li>
<li>EditMediaComplete: Video editing completed;</li>
<li>SplitMediaComplete: Video splitting completed;</li>
<li>ComposeMediaComplete: Media file creation completion;</li>
<li>WechatMiniProgramPublishComplete: WeChat Mini Program Publishing Completed.</li>
<li>RemoveWatermark: Intelligent watermark removal completion.</li>
<li>RebuildMediaComplete: Audio and video quality rebirth completion event (This is not recommended).</li>
<li>ReviewAudioVideoComplete: Audio/video moderation completed;</li>
<li>ExtractTraceWatermarkComplete: Traceability watermark extraction completed;</li>
<li>ExtractCopyRightWatermarkComplete: Extracting copyright watermark completion.</li>
<li>DescribeFileAttributesComplete: File attribute acquisition completion.</li>
<li>QualityInspectComplete: Audio and video quality inspection completed;</li>
<li>QualityEnhanceComplete: Audio and video quality rebirth task completion;</li>
<li>PersistenceComplete: Edit completed.</li>
<li>ComplexAdaptiveDynamicStreamingComplete: complex adaptive bitstream task completed.</li>
<li>ProcessMediaByMPSComplete: MPS video processing is completed.</li>
<li>AigcImageTaskComplete: AIGC image generation task complete.</li>
<li>AigcVideoTaskComplete: AIGC video generation task completed.</li>
<b>Event types compatible with the 2017 version:</b>
<li>TranscodeComplete: video transcoding completion;</li>
<li>ConcatComplete: Video splicing completion.</li>
<li>ClipComplete: Video editing completed;</li>
<li>CreateImageSpriteComplete: Video thumbnail capture completion.</li>
<li>CreateSnapshotByTimeOffsetComplete: Video screenshot by time point.</li>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Video upload completion event. Valid when the event type is NewFileUpload.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileUploadTask m_fileUploadEvent;
                    bool m_fileUploadEventHasBeenSet;

                    /**
                     * Task flow status change event. Valid when the event type is ProcedureStateChanged.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ProcedureTask m_procedureStateChangeEvent;
                    bool m_procedureStateChangeEventHasBeenSet;

                    /**
                     * File deletion event. Valid when the event type is FileDeleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FileDeleteTask m_fileDeleteEvent;
                    bool m_fileDeleteEventHasBeenSet;

                    /**
                     * Video pull completion event. Valid when the event type is PullComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PullUploadTask m_pullCompleteEvent;
                    bool m_pullCompleteEventHasBeenSet;

                    /**
                     * Video editing completion event. Valid when the event type is EditMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    EditMediaTask m_editMediaCompleteEvent;
                    bool m_editMediaCompleteEventHasBeenSet;

                    /**
                     * Video splitting completion event. Valid when the event type is SplitMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SplitMediaTask m_splitMediaCompleteEvent;
                    bool m_splitMediaCompleteEventHasBeenSet;

                    /**
                     * Media file creation task completion event. Valid when the event type is ComposeMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ComposeMediaTask m_composeMediaCompleteEvent;
                    bool m_composeMediaCompleteEventHasBeenSet;

                    /**
                     * Video editing completion event. Valid when the event type is ClipComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ClipTask2017 m_clipCompleteEvent;
                    bool m_clipCompleteEventHasBeenSet;

                    /**
                     * Video transcoding completion event, valid when the event type is TranscodeComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TranscodeTask2017 m_transcodeCompleteEvent;
                    bool m_transcodeCompleteEventHasBeenSet;

                    /**
                     * Video thumbnail capture completion event. Valid when the event type is CreateImageSpriteComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CreateImageSpriteTask2017 m_createImageSpriteCompleteEvent;
                    bool m_createImageSpriteCompleteEventHasBeenSet;

                    /**
                     * Video splicing completion event. Valid when the event type is ConcatComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ConcatTask2017 m_concatCompleteEvent;
                    bool m_concatCompleteEventHasBeenSet;

                    /**
                     * Video screenshot by time point completion event. Valid when the event type is CreateSnapshotByTimeOffsetComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SnapshotByTimeOffsetTask2017 m_snapshotByTimeOffsetCompleteEvent;
                    bool m_snapshotByTimeOffsetCompleteEventHasBeenSet;

                    /**
                     * WeChat Publishing Completion Event. Valid when the event type is WechatPublishComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WechatPublishTask m_wechatPublishCompleteEvent;
                    bool m_wechatPublishCompleteEventHasBeenSet;

                    /**
                     * WeChat Mini Program Publishing Task Completion Event. Valid when the event type is WechatMiniProgramPublishComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WechatMiniProgramPublishTask m_wechatMiniProgramPublishCompleteEvent;
                    bool m_wechatMiniProgramPublishCompleteEventHasBeenSet;

                    /**
                     * Intelligent Watermark Removal Completion Event is valid when the event type is RemoveWatermark.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RemoveWatermarkTask m_removeWatermarkCompleteEvent;
                    bool m_removeWatermarkCompleteEventHasBeenSet;

                    /**
                     * Video retrieval completion event. Valid when the event type is RestoreMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RestoreMediaTask m_restoreMediaCompleteEvent;
                    bool m_restoreMediaCompleteEventHasBeenSet;

                    /**
                     * Audio and video quality rebirth completion event. Valid when the event type is RebuildMediaComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RebuildMediaTask m_rebuildMediaCompleteEvent;
                    bool m_rebuildMediaCompleteEventHasBeenSet;

                    /**
                     * Traceability watermark extraction completion event. Valid when the event type is ExtractTraceWatermarkComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ExtractTraceWatermarkTask m_extractTraceWatermarkCompleteEvent;
                    bool m_extractTraceWatermarkCompleteEventHasBeenSet;

                    /**
                     * Copyright watermark extraction completion event. Valid when the event type is ExtractCopyRightWatermarkComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ExtractCopyRightWatermarkTask m_extractCopyRightWatermarkCompleteEvent;
                    bool m_extractCopyRightWatermarkCompleteEventHasBeenSet;

                    /**
                     * Audio/video moderation completed event. Valid when the event type is ReviewAudioVideoComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ReviewAudioVideoTask m_reviewAudioVideoCompleteEvent;
                    bool m_reviewAudioVideoCompleteEventHasBeenSet;

                    /**
                     * This field is invalid.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ReduceMediaBitrateTask m_reduceMediaBitrateCompleteEvent;
                    bool m_reduceMediaBitrateCompleteEventHasBeenSet;

                    /**
                     * File attribute acquisition completion event. Valid when the event type is DescribeFileAttributesComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DescribeFileAttributesTask m_describeFileAttributesCompleteEvent;
                    bool m_describeFileAttributesCompleteEventHasBeenSet;

                    /**
                     * Audio and video quality detection completion event. Valid when the event type is QualityInspectComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    QualityInspectTask m_qualityInspectCompleteEvent;
                    bool m_qualityInspectCompleteEventHasBeenSet;

                    /**
                     * Audio and video quality rebirth completion event. Valid when the event type is QualityEnhanceComplete.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Editing solidification completion event. Valid when the event type is PersistenceComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PersistenceCompleteTask m_persistenceCompleteEvent;
                    bool m_persistenceCompleteEventHasBeenSet;

                    /**
                     * Adaptive bitrate task information, valid only when EventType is ComplexAdaptiveDynamicStreamingComplete.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ComplexAdaptiveDynamicStreamingTask m_complexAdaptiveDynamicStreamingCompleteEvent;
                    bool m_complexAdaptiveDynamicStreamingCompleteEventHasBeenSet;

                    /**
                     * MPS video processing task information. Valid only when EventType is ProcessMediaByMPSComplete.
                     */
                    ProcessMediaByMPS m_processMediaByMPSCompleteEvent;
                    bool m_processMediaByMPSCompleteEventHasBeenSet;

                    /**
                     * AIGC image generation task info. Valid only when EventType is AigcImageTaskComplete.
                     */
                    AigcImageTask m_aigcImageCompleteEvent;
                    bool m_aigcImageCompleteEventHasBeenSet;

                    /**
                     * AIGC video task info. Valid only when EventType is AigcVideoTaskComplete.
                     */
                    AigcVideoTask m_aigcVideoCompleteEvent;
                    bool m_aigcVideoCompleteEventHasBeenSet;

                    /**
                     * Extract digital watermark information. Valid at that time only when EventType is ExtractBlindWatermarkComplete.
                     */
                    ExtractBlindWatermarkTask m_extractBlindWatermarkComplete;
                    bool m_extractBlindWatermarkCompleteHasBeenSet;

                    /**
                     * AIGC scenario-based image generation task info, valid only when EventType is SceneAigcImageCompleteEvent.
                     */
                    SceneAigcImageTask m_sceneAigcImageCompleteEvent;
                    bool m_sceneAigcImageCompleteEventHasBeenSet;

                    /**
                     * Image asynchronous task processing info, valid only when EventType is ProcessImageAsyncCompleteEvent.
                     */
                    ProcessImageAsyncTask m_processImageAsyncCompleteEvent;
                    bool m_processImageAsyncCompleteEventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EVENTCONTENT_H_
