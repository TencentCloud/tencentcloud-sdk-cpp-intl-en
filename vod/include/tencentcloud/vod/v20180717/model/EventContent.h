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
#include <tencentcloud/vod/v20180717/model/CreateAigcAdvancedCustomElementTask.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcCustomVoiceTask.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcFaceInfoAsyncTask.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DTask.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Event notification content. Among them, TranscodeCompleteEvent, ConcatCompleteEvent, ClipCompleteEvent, CreateImageSpriteCompleteEvent, and SnapshotByTimeOffsetCompleteEvent are event notifications for tasks initiated through 2017 APIs.
                */
                class EventContent : public AbstractModel
                {
                public:
                    EventContent();
                    ~EventContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Event handler. The caller must call ConfirmEvents to acknowledge that the message has been received. The confirmation is valid for 30 seconds. After expiration, the event can be retrieved again.</p>
                     * @return EventHandle <p>Event handler. The caller must call ConfirmEvents to acknowledge that the message has been received. The confirmation is valid for 30 seconds. After expiration, the event can be retrieved again.</p>
                     * 
                     */
                    std::string GetEventHandle() const;

                    /**
                     * 设置<p>Event handler. The caller must call ConfirmEvents to acknowledge that the message has been received. The confirmation is valid for 30 seconds. After expiration, the event can be retrieved again.</p>
                     * @param _eventHandle <p>Event handler. The caller must call ConfirmEvents to acknowledge that the message has been received. The confirmation is valid for 30 seconds. After expiration, the event can be retrieved again.</p>
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
                     * 获取<p><b>Supported event types:</b></p><li>NewFileUpload: video upload completed;</li><li>ProcedureStateChanged: task flow status change;</li><li>FileDeleted: video deletion completed;</li><li>RestoreMediaComplete: video retrieval completion;</li><li>PullComplete: video pull completion;</li><li>EditMediaComplete: video editing completed;</li><li>SplitMediaComplete: video splitting completed;</li><li>ComposeMediaComplete: media file creation completion;</li><li>WechatMiniProgramPublishComplete: WeChat Mini Program Publishing Completed.</li><li>RemoveWatermark: intelligent watermark removal completion.</li><li>RebuildMediaComplete: audio and video quality rebirth completion event (not recommended).</li><li>ReviewAudioVideoComplete: audio/video moderation completed;</li><li>ExtractTraceWatermarkComplete: Traceability watermark extraction completed;</li><li>ExtractCopyRightWatermarkComplete: Extracting copyright watermark completion;</li><li>DescribeFileAttributesComplete: file attribute acquisition completion;</li><li>QualityInspectComplete: audio and video quality detection completed;</li><li>QualityEnhanceComplete: audio and video quality rebirth task completion;</li><li>PersistenceComplete: edit persistence completion;</li><li>ComplexAdaptiveDynamicStreamingComplete: complex adaptive bitstream task completion.</li><li>ProcessMediaByMPSComplete: MPS video processing completed.</li><li>AigcImageTaskComplete: AIGC image generation task completed.</li><li>AigcVideoTaskComplete: AIGC video generation task completed.</li><li>AigcHunyuan3DTaskComplete: AIGC Hunyuan 3D task completed.</li><li>DescribeAigcFaceInfoAsyncComplete: asynchronously fetch AIGC face information task completed.</li><b>Event types compatible with the 2017 version:</b><li>TranscodeComplete: video transcoding completion;</li><li>ConcatComplete: video splicing completion;</li><li>ClipComplete: video editing completed;</li><li>CreateImageSpriteComplete: Video thumbnail capture completion;</li><li>CreateSnapshotByTimeOffsetComplete: video screenshot by time point.</li>
                     * @return EventType <p><b>Supported event types:</b></p><li>NewFileUpload: video upload completed;</li><li>ProcedureStateChanged: task flow status change;</li><li>FileDeleted: video deletion completed;</li><li>RestoreMediaComplete: video retrieval completion;</li><li>PullComplete: video pull completion;</li><li>EditMediaComplete: video editing completed;</li><li>SplitMediaComplete: video splitting completed;</li><li>ComposeMediaComplete: media file creation completion;</li><li>WechatMiniProgramPublishComplete: WeChat Mini Program Publishing Completed.</li><li>RemoveWatermark: intelligent watermark removal completion.</li><li>RebuildMediaComplete: audio and video quality rebirth completion event (not recommended).</li><li>ReviewAudioVideoComplete: audio/video moderation completed;</li><li>ExtractTraceWatermarkComplete: Traceability watermark extraction completed;</li><li>ExtractCopyRightWatermarkComplete: Extracting copyright watermark completion;</li><li>DescribeFileAttributesComplete: file attribute acquisition completion;</li><li>QualityInspectComplete: audio and video quality detection completed;</li><li>QualityEnhanceComplete: audio and video quality rebirth task completion;</li><li>PersistenceComplete: edit persistence completion;</li><li>ComplexAdaptiveDynamicStreamingComplete: complex adaptive bitstream task completion.</li><li>ProcessMediaByMPSComplete: MPS video processing completed.</li><li>AigcImageTaskComplete: AIGC image generation task completed.</li><li>AigcVideoTaskComplete: AIGC video generation task completed.</li><li>AigcHunyuan3DTaskComplete: AIGC Hunyuan 3D task completed.</li><li>DescribeAigcFaceInfoAsyncComplete: asynchronously fetch AIGC face information task completed.</li><b>Event types compatible with the 2017 version:</b><li>TranscodeComplete: video transcoding completion;</li><li>ConcatComplete: video splicing completion;</li><li>ClipComplete: video editing completed;</li><li>CreateImageSpriteComplete: Video thumbnail capture completion;</li><li>CreateSnapshotByTimeOffsetComplete: video screenshot by time point.</li>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<p><b>Supported event types:</b></p><li>NewFileUpload: video upload completed;</li><li>ProcedureStateChanged: task flow status change;</li><li>FileDeleted: video deletion completed;</li><li>RestoreMediaComplete: video retrieval completion;</li><li>PullComplete: video pull completion;</li><li>EditMediaComplete: video editing completed;</li><li>SplitMediaComplete: video splitting completed;</li><li>ComposeMediaComplete: media file creation completion;</li><li>WechatMiniProgramPublishComplete: WeChat Mini Program Publishing Completed.</li><li>RemoveWatermark: intelligent watermark removal completion.</li><li>RebuildMediaComplete: audio and video quality rebirth completion event (not recommended).</li><li>ReviewAudioVideoComplete: audio/video moderation completed;</li><li>ExtractTraceWatermarkComplete: Traceability watermark extraction completed;</li><li>ExtractCopyRightWatermarkComplete: Extracting copyright watermark completion;</li><li>DescribeFileAttributesComplete: file attribute acquisition completion;</li><li>QualityInspectComplete: audio and video quality detection completed;</li><li>QualityEnhanceComplete: audio and video quality rebirth task completion;</li><li>PersistenceComplete: edit persistence completion;</li><li>ComplexAdaptiveDynamicStreamingComplete: complex adaptive bitstream task completion.</li><li>ProcessMediaByMPSComplete: MPS video processing completed.</li><li>AigcImageTaskComplete: AIGC image generation task completed.</li><li>AigcVideoTaskComplete: AIGC video generation task completed.</li><li>AigcHunyuan3DTaskComplete: AIGC Hunyuan 3D task completed.</li><li>DescribeAigcFaceInfoAsyncComplete: asynchronously fetch AIGC face information task completed.</li><b>Event types compatible with the 2017 version:</b><li>TranscodeComplete: video transcoding completion;</li><li>ConcatComplete: video splicing completion;</li><li>ClipComplete: video editing completed;</li><li>CreateImageSpriteComplete: Video thumbnail capture completion;</li><li>CreateSnapshotByTimeOffsetComplete: video screenshot by time point.</li>
                     * @param _eventType <p><b>Supported event types:</b></p><li>NewFileUpload: video upload completed;</li><li>ProcedureStateChanged: task flow status change;</li><li>FileDeleted: video deletion completed;</li><li>RestoreMediaComplete: video retrieval completion;</li><li>PullComplete: video pull completion;</li><li>EditMediaComplete: video editing completed;</li><li>SplitMediaComplete: video splitting completed;</li><li>ComposeMediaComplete: media file creation completion;</li><li>WechatMiniProgramPublishComplete: WeChat Mini Program Publishing Completed.</li><li>RemoveWatermark: intelligent watermark removal completion.</li><li>RebuildMediaComplete: audio and video quality rebirth completion event (not recommended).</li><li>ReviewAudioVideoComplete: audio/video moderation completed;</li><li>ExtractTraceWatermarkComplete: Traceability watermark extraction completed;</li><li>ExtractCopyRightWatermarkComplete: Extracting copyright watermark completion;</li><li>DescribeFileAttributesComplete: file attribute acquisition completion;</li><li>QualityInspectComplete: audio and video quality detection completed;</li><li>QualityEnhanceComplete: audio and video quality rebirth task completion;</li><li>PersistenceComplete: edit persistence completion;</li><li>ComplexAdaptiveDynamicStreamingComplete: complex adaptive bitstream task completion.</li><li>ProcessMediaByMPSComplete: MPS video processing completed.</li><li>AigcImageTaskComplete: AIGC image generation task completed.</li><li>AigcVideoTaskComplete: AIGC video generation task completed.</li><li>AigcHunyuan3DTaskComplete: AIGC Hunyuan 3D task completed.</li><li>DescribeAigcFaceInfoAsyncComplete: asynchronously fetch AIGC face information task completed.</li><b>Event types compatible with the 2017 version:</b><li>TranscodeComplete: video transcoding completion;</li><li>ConcatComplete: video splicing completion;</li><li>ClipComplete: video editing completed;</li><li>CreateImageSpriteComplete: Video thumbnail capture completion;</li><li>CreateSnapshotByTimeOffsetComplete: video screenshot by time point.</li>
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
                     * 获取<p>Video upload completion event. Valid when the event type is NewFileUpload.</p>
                     * @return FileUploadEvent <p>Video upload completion event. Valid when the event type is NewFileUpload.</p>
                     * 
                     */
                    FileUploadTask GetFileUploadEvent() const;

                    /**
                     * 设置<p>Video upload completion event. Valid when the event type is NewFileUpload.</p>
                     * @param _fileUploadEvent <p>Video upload completion event. Valid when the event type is NewFileUpload.</p>
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
                     * 获取<p>Task flow status change event. Valid when the event type is ProcedureStateChanged.</p>
                     * @return ProcedureStateChangeEvent <p>Task flow status change event. Valid when the event type is ProcedureStateChanged.</p>
                     * 
                     */
                    ProcedureTask GetProcedureStateChangeEvent() const;

                    /**
                     * 设置<p>Task flow status change event. Valid when the event type is ProcedureStateChanged.</p>
                     * @param _procedureStateChangeEvent <p>Task flow status change event. Valid when the event type is ProcedureStateChanged.</p>
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
                     * 获取<p>File deletion event. Valid when the event type is FileDeleted.</p>
                     * @return FileDeleteEvent <p>File deletion event. Valid when the event type is FileDeleted.</p>
                     * 
                     */
                    FileDeleteTask GetFileDeleteEvent() const;

                    /**
                     * 设置<p>File deletion event. Valid when the event type is FileDeleted.</p>
                     * @param _fileDeleteEvent <p>File deletion event. Valid when the event type is FileDeleted.</p>
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
                     * 获取<p>Video pull completion event. Valid when the event type is PullComplete.</p>
                     * @return PullCompleteEvent <p>Video pull completion event. Valid when the event type is PullComplete.</p>
                     * 
                     */
                    PullUploadTask GetPullCompleteEvent() const;

                    /**
                     * 设置<p>Video pull completion event. Valid when the event type is PullComplete.</p>
                     * @param _pullCompleteEvent <p>Video pull completion event. Valid when the event type is PullComplete.</p>
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
                     * 获取<p>Video editing completion event. Valid when the event type is EditMediaComplete.</p>
                     * @return EditMediaCompleteEvent <p>Video editing completion event. Valid when the event type is EditMediaComplete.</p>
                     * 
                     */
                    EditMediaTask GetEditMediaCompleteEvent() const;

                    /**
                     * 设置<p>Video editing completion event. Valid when the event type is EditMediaComplete.</p>
                     * @param _editMediaCompleteEvent <p>Video editing completion event. Valid when the event type is EditMediaComplete.</p>
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
                     * 获取<p>Video splitting completion event. Valid when the event type is SplitMediaComplete.</p>
                     * @return SplitMediaCompleteEvent <p>Video splitting completion event. Valid when the event type is SplitMediaComplete.</p>
                     * 
                     */
                    SplitMediaTask GetSplitMediaCompleteEvent() const;

                    /**
                     * 设置<p>Video splitting completion event. Valid when the event type is SplitMediaComplete.</p>
                     * @param _splitMediaCompleteEvent <p>Video splitting completion event. Valid when the event type is SplitMediaComplete.</p>
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
                     * 获取<p>Media file creation task completion event. Valid when the event type is ComposeMediaComplete.</p>
                     * @return ComposeMediaCompleteEvent <p>Media file creation task completion event. Valid when the event type is ComposeMediaComplete.</p>
                     * 
                     */
                    ComposeMediaTask GetComposeMediaCompleteEvent() const;

                    /**
                     * 设置<p>Media file creation task completion event. Valid when the event type is ComposeMediaComplete.</p>
                     * @param _composeMediaCompleteEvent <p>Media file creation task completion event. Valid when the event type is ComposeMediaComplete.</p>
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
                     * 获取<p>Video editing completion event. Valid when the event type is ClipComplete.</p>
                     * @return ClipCompleteEvent <p>Video editing completion event. Valid when the event type is ClipComplete.</p>
                     * 
                     */
                    ClipTask2017 GetClipCompleteEvent() const;

                    /**
                     * 设置<p>Video editing completion event. Valid when the event type is ClipComplete.</p>
                     * @param _clipCompleteEvent <p>Video editing completion event. Valid when the event type is ClipComplete.</p>
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
                     * 获取<p>Video transcoding completion event. Valid when the event type is TranscodeComplete.</p>
                     * @return TranscodeCompleteEvent <p>Video transcoding completion event. Valid when the event type is TranscodeComplete.</p>
                     * 
                     */
                    TranscodeTask2017 GetTranscodeCompleteEvent() const;

                    /**
                     * 设置<p>Video transcoding completion event. Valid when the event type is TranscodeComplete.</p>
                     * @param _transcodeCompleteEvent <p>Video transcoding completion event. Valid when the event type is TranscodeComplete.</p>
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
                     * 获取<p>Video thumbnail capture completion event. Valid when the event type is CreateImageSpriteComplete.</p>
                     * @return CreateImageSpriteCompleteEvent <p>Video thumbnail capture completion event. Valid when the event type is CreateImageSpriteComplete.</p>
                     * 
                     */
                    CreateImageSpriteTask2017 GetCreateImageSpriteCompleteEvent() const;

                    /**
                     * 设置<p>Video thumbnail capture completion event. Valid when the event type is CreateImageSpriteComplete.</p>
                     * @param _createImageSpriteCompleteEvent <p>Video thumbnail capture completion event. Valid when the event type is CreateImageSpriteComplete.</p>
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
                     * 获取<p>Video splicing completion event. Valid when the event type is ConcatComplete.</p>
                     * @return ConcatCompleteEvent <p>Video splicing completion event. Valid when the event type is ConcatComplete.</p>
                     * 
                     */
                    ConcatTask2017 GetConcatCompleteEvent() const;

                    /**
                     * 设置<p>Video splicing completion event. Valid when the event type is ConcatComplete.</p>
                     * @param _concatCompleteEvent <p>Video splicing completion event. Valid when the event type is ConcatComplete.</p>
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
                     * 获取<p>Video screenshot by time point completion event. Valid when the event type is CreateSnapshotByTimeOffsetComplete.</p>
                     * @return SnapshotByTimeOffsetCompleteEvent <p>Video screenshot by time point completion event. Valid when the event type is CreateSnapshotByTimeOffsetComplete.</p>
                     * 
                     */
                    SnapshotByTimeOffsetTask2017 GetSnapshotByTimeOffsetCompleteEvent() const;

                    /**
                     * 设置<p>Video screenshot by time point completion event. Valid when the event type is CreateSnapshotByTimeOffsetComplete.</p>
                     * @param _snapshotByTimeOffsetCompleteEvent <p>Video screenshot by time point completion event. Valid when the event type is CreateSnapshotByTimeOffsetComplete.</p>
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
                     * 获取<p>WeChat Publishing Completion Event, valid when the event type is WechatPublishComplete.</p>
                     * @return WechatPublishCompleteEvent <p>WeChat Publishing Completion Event, valid when the event type is WechatPublishComplete.</p>
                     * 
                     */
                    WechatPublishTask GetWechatPublishCompleteEvent() const;

                    /**
                     * 设置<p>WeChat Publishing Completion Event, valid when the event type is WechatPublishComplete.</p>
                     * @param _wechatPublishCompleteEvent <p>WeChat Publishing Completion Event, valid when the event type is WechatPublishComplete.</p>
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
                     * 获取<p>WeChat Mini Program Publishing Task Completion Event. Valid when the event type is WechatMiniProgramPublishComplete.</p>
                     * @return WechatMiniProgramPublishCompleteEvent <p>WeChat Mini Program Publishing Task Completion Event. Valid when the event type is WechatMiniProgramPublishComplete.</p>
                     * 
                     */
                    WechatMiniProgramPublishTask GetWechatMiniProgramPublishCompleteEvent() const;

                    /**
                     * 设置<p>WeChat Mini Program Publishing Task Completion Event. Valid when the event type is WechatMiniProgramPublishComplete.</p>
                     * @param _wechatMiniProgramPublishCompleteEvent <p>WeChat Mini Program Publishing Task Completion Event. Valid when the event type is WechatMiniProgramPublishComplete.</p>
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
                     * 获取<p>Intelligent Watermark Removal Completion Event, valid when the event type is RemoveWatermark.</p>
                     * @return RemoveWatermarkCompleteEvent <p>Intelligent Watermark Removal Completion Event, valid when the event type is RemoveWatermark.</p>
                     * 
                     */
                    RemoveWatermarkTask GetRemoveWatermarkCompleteEvent() const;

                    /**
                     * 设置<p>Intelligent Watermark Removal Completion Event, valid when the event type is RemoveWatermark.</p>
                     * @param _removeWatermarkCompleteEvent <p>Intelligent Watermark Removal Completion Event, valid when the event type is RemoveWatermark.</p>
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
                     * 获取<p>Video retrieval completion event. Valid when the event type is RestoreMediaComplete.</p>
                     * @return RestoreMediaCompleteEvent <p>Video retrieval completion event. Valid when the event type is RestoreMediaComplete.</p>
                     * 
                     */
                    RestoreMediaTask GetRestoreMediaCompleteEvent() const;

                    /**
                     * 设置<p>Video retrieval completion event. Valid when the event type is RestoreMediaComplete.</p>
                     * @param _restoreMediaCompleteEvent <p>Video retrieval completion event. Valid when the event type is RestoreMediaComplete.</p>
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
                     * 获取<p>Audio and video quality rebirth completion event. Valid when the event type is RebuildMediaComplete.</p>
                     * @return RebuildMediaCompleteEvent <p>Audio and video quality rebirth completion event. Valid when the event type is RebuildMediaComplete.</p>
                     * 
                     */
                    RebuildMediaTask GetRebuildMediaCompleteEvent() const;

                    /**
                     * 设置<p>Audio and video quality rebirth completion event. Valid when the event type is RebuildMediaComplete.</p>
                     * @param _rebuildMediaCompleteEvent <p>Audio and video quality rebirth completion event. Valid when the event type is RebuildMediaComplete.</p>
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
                     * 获取<p>Traceability watermark extraction completion event. Valid when the event type is ExtractTraceWatermarkComplete.</p>
                     * @return ExtractTraceWatermarkCompleteEvent <p>Traceability watermark extraction completion event. Valid when the event type is ExtractTraceWatermarkComplete.</p>
                     * 
                     */
                    ExtractTraceWatermarkTask GetExtractTraceWatermarkCompleteEvent() const;

                    /**
                     * 设置<p>Traceability watermark extraction completion event. Valid when the event type is ExtractTraceWatermarkComplete.</p>
                     * @param _extractTraceWatermarkCompleteEvent <p>Traceability watermark extraction completion event. Valid when the event type is ExtractTraceWatermarkComplete.</p>
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
                     * 获取<p>Copyright watermark extraction completion event, valid when the event type is ExtractCopyRightWatermarkComplete.</p>
                     * @return ExtractCopyRightWatermarkCompleteEvent <p>Copyright watermark extraction completion event, valid when the event type is ExtractCopyRightWatermarkComplete.</p>
                     * 
                     */
                    ExtractCopyRightWatermarkTask GetExtractCopyRightWatermarkCompleteEvent() const;

                    /**
                     * 设置<p>Copyright watermark extraction completion event, valid when the event type is ExtractCopyRightWatermarkComplete.</p>
                     * @param _extractCopyRightWatermarkCompleteEvent <p>Copyright watermark extraction completion event, valid when the event type is ExtractCopyRightWatermarkComplete.</p>
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
                     * 获取<p>Audio/Video moderation completed event. Valid when the event type is ReviewAudioVideoComplete.</p>
                     * @return ReviewAudioVideoCompleteEvent <p>Audio/Video moderation completed event. Valid when the event type is ReviewAudioVideoComplete.</p>
                     * 
                     */
                    ReviewAudioVideoTask GetReviewAudioVideoCompleteEvent() const;

                    /**
                     * 设置<p>Audio/Video moderation completed event. Valid when the event type is ReviewAudioVideoComplete.</p>
                     * @param _reviewAudioVideoCompleteEvent <p>Audio/Video moderation completed event. Valid when the event type is ReviewAudioVideoComplete.</p>
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
                     * 获取<p>This field is invalid.</p>
                     * @return ReduceMediaBitrateCompleteEvent <p>This field is invalid.</p>
                     * 
                     */
                    ReduceMediaBitrateTask GetReduceMediaBitrateCompleteEvent() const;

                    /**
                     * 设置<p>This field is invalid.</p>
                     * @param _reduceMediaBitrateCompleteEvent <p>This field is invalid.</p>
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
                     * 获取<p>File attribute acquisition completion event. Valid when the event type is DescribeFileAttributesComplete.</p>
                     * @return DescribeFileAttributesCompleteEvent <p>File attribute acquisition completion event. Valid when the event type is DescribeFileAttributesComplete.</p>
                     * 
                     */
                    DescribeFileAttributesTask GetDescribeFileAttributesCompleteEvent() const;

                    /**
                     * 设置<p>File attribute acquisition completion event. Valid when the event type is DescribeFileAttributesComplete.</p>
                     * @param _describeFileAttributesCompleteEvent <p>File attribute acquisition completion event. Valid when the event type is DescribeFileAttributesComplete.</p>
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
                     * 获取<p>Audio and video quality detection completion event. Valid when the event type is QualityInspectComplete.</p>
                     * @return QualityInspectCompleteEvent <p>Audio and video quality detection completion event. Valid when the event type is QualityInspectComplete.</p>
                     * 
                     */
                    QualityInspectTask GetQualityInspectCompleteEvent() const;

                    /**
                     * 设置<p>Audio and video quality detection completion event. Valid when the event type is QualityInspectComplete.</p>
                     * @param _qualityInspectCompleteEvent <p>Audio and video quality detection completion event. Valid when the event type is QualityInspectComplete.</p>
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
                     * 获取<p>Audio and video quality rebirth completion event. Valid when the event type is QualityEnhanceComplete.</p>
                     * @return QualityEnhanceCompleteEvent <p>Audio and video quality rebirth completion event. Valid when the event type is QualityEnhanceComplete.</p>
                     * 
                     */
                    QualityEnhanceTask GetQualityEnhanceCompleteEvent() const;

                    /**
                     * 设置<p>Audio and video quality rebirth completion event. Valid when the event type is QualityEnhanceComplete.</p>
                     * @param _qualityEnhanceCompleteEvent <p>Audio and video quality rebirth completion event. Valid when the event type is QualityEnhanceComplete.</p>
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
                     * 获取<p>Media forwarding status change event, valid when the event type is MediaCastStatusChanged.</p>
                     * @return MediaCastStatusChangedEvent <p>Media forwarding status change event, valid when the event type is MediaCastStatusChanged.</p>
                     * 
                     */
                    MediaCastEvent GetMediaCastStatusChangedEvent() const;

                    /**
                     * 设置<p>Media forwarding status change event, valid when the event type is MediaCastStatusChanged.</p>
                     * @param _mediaCastStatusChangedEvent <p>Media forwarding status change event, valid when the event type is MediaCastStatusChanged.</p>
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
                     * 获取<p>Editing solidification completion event. Valid when the event type is PersistenceComplete.</p>
                     * @return PersistenceCompleteEvent <p>Editing solidification completion event. Valid when the event type is PersistenceComplete.</p>
                     * 
                     */
                    PersistenceCompleteTask GetPersistenceCompleteEvent() const;

                    /**
                     * 设置<p>Editing solidification completion event. Valid when the event type is PersistenceComplete.</p>
                     * @param _persistenceCompleteEvent <p>Editing solidification completion event. Valid when the event type is PersistenceComplete.</p>
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
                     * 获取<p>Adaptive bitrate task information. It is valid only when EventType is ComplexAdaptiveDynamicStreamingComplete.</p>
                     * @return ComplexAdaptiveDynamicStreamingCompleteEvent <p>Adaptive bitrate task information. It is valid only when EventType is ComplexAdaptiveDynamicStreamingComplete.</p>
                     * 
                     */
                    ComplexAdaptiveDynamicStreamingTask GetComplexAdaptiveDynamicStreamingCompleteEvent() const;

                    /**
                     * 设置<p>Adaptive bitrate task information. It is valid only when EventType is ComplexAdaptiveDynamicStreamingComplete.</p>
                     * @param _complexAdaptiveDynamicStreamingCompleteEvent <p>Adaptive bitrate task information. It is valid only when EventType is ComplexAdaptiveDynamicStreamingComplete.</p>
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
                     * 获取<p>MPS video processing task information. Valid only when EventType is ProcessMediaByMPSComplete.</p>
                     * @return ProcessMediaByMPSCompleteEvent <p>MPS video processing task information. Valid only when EventType is ProcessMediaByMPSComplete.</p>
                     * 
                     */
                    ProcessMediaByMPS GetProcessMediaByMPSCompleteEvent() const;

                    /**
                     * 设置<p>MPS video processing task information. Valid only when EventType is ProcessMediaByMPSComplete.</p>
                     * @param _processMediaByMPSCompleteEvent <p>MPS video processing task information. Valid only when EventType is ProcessMediaByMPSComplete.</p>
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
                     * 获取<p>AIGC image generation task info, valid only when EventType is AigcImageTaskComplete.</p>
                     * @return AigcImageCompleteEvent <p>AIGC image generation task info, valid only when EventType is AigcImageTaskComplete.</p>
                     * 
                     */
                    AigcImageTask GetAigcImageCompleteEvent() const;

                    /**
                     * 设置<p>AIGC image generation task info, valid only when EventType is AigcImageTaskComplete.</p>
                     * @param _aigcImageCompleteEvent <p>AIGC image generation task info, valid only when EventType is AigcImageTaskComplete.</p>
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
                     * 获取<p>Information of the AIGC video generation task. Valid only when EventType is AigcVideoTaskComplete.</p>
                     * @return AigcVideoCompleteEvent <p>Information of the AIGC video generation task. Valid only when EventType is AigcVideoTaskComplete.</p>
                     * 
                     */
                    AigcVideoTask GetAigcVideoCompleteEvent() const;

                    /**
                     * 设置<p>Information of the AIGC video generation task. Valid only when EventType is AigcVideoTaskComplete.</p>
                     * @param _aigcVideoCompleteEvent <p>Information of the AIGC video generation task. Valid only when EventType is AigcVideoTaskComplete.</p>
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
                     * 获取<p>Extract digital watermark information. Valid only when EventType is ExtractBlindWatermarkComplete.</p>
                     * @return ExtractBlindWatermarkComplete <p>Extract digital watermark information. Valid only when EventType is ExtractBlindWatermarkComplete.</p>
                     * 
                     */
                    ExtractBlindWatermarkTask GetExtractBlindWatermarkComplete() const;

                    /**
                     * 设置<p>Extract digital watermark information. Valid only when EventType is ExtractBlindWatermarkComplete.</p>
                     * @param _extractBlindWatermarkComplete <p>Extract digital watermark information. Valid only when EventType is ExtractBlindWatermarkComplete.</p>
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
                     * 获取<p>AIGC scenario-based image generation task info. Valid only when EventType is SceneAigcImageCompleteEvent.</p>
                     * @return SceneAigcImageCompleteEvent <p>AIGC scenario-based image generation task info. Valid only when EventType is SceneAigcImageCompleteEvent.</p>
                     * 
                     */
                    SceneAigcImageTask GetSceneAigcImageCompleteEvent() const;

                    /**
                     * 设置<p>AIGC scenario-based image generation task info. Valid only when EventType is SceneAigcImageCompleteEvent.</p>
                     * @param _sceneAigcImageCompleteEvent <p>AIGC scenario-based image generation task info. Valid only when EventType is SceneAigcImageCompleteEvent.</p>
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
                     * 获取<p>Image asynchronous task processing information. Valid only when EventType is ProcessImageAsyncCompleteEvent.</p>
                     * @return ProcessImageAsyncCompleteEvent <p>Image asynchronous task processing information. Valid only when EventType is ProcessImageAsyncCompleteEvent.</p>
                     * 
                     */
                    ProcessImageAsyncTask GetProcessImageAsyncCompleteEvent() const;

                    /**
                     * 设置<p>Image asynchronous task processing information. Valid only when EventType is ProcessImageAsyncCompleteEvent.</p>
                     * @param _processImageAsyncCompleteEvent <p>Image asynchronous task processing information. Valid only when EventType is ProcessImageAsyncCompleteEvent.</p>
                     * 
                     */
                    void SetProcessImageAsyncCompleteEvent(const ProcessImageAsyncTask& _processImageAsyncCompleteEvent);

                    /**
                     * 判断参数 ProcessImageAsyncCompleteEvent 是否已赋值
                     * @return ProcessImageAsyncCompleteEvent 是否已赋值
                     * 
                     */
                    bool ProcessImageAsyncCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>AIGC custom entity information, this field has a value only when EventType is CreateAigcAdvancedCustomElementCompleteEvent.</p>
                     * @return CreateAigcAdvancedCustomElementCompleteEvent <p>AIGC custom entity information, this field has a value only when EventType is CreateAigcAdvancedCustomElementCompleteEvent.</p>
                     * 
                     */
                    CreateAigcAdvancedCustomElementTask GetCreateAigcAdvancedCustomElementCompleteEvent() const;

                    /**
                     * 设置<p>AIGC custom entity information, this field has a value only when EventType is CreateAigcAdvancedCustomElementCompleteEvent.</p>
                     * @param _createAigcAdvancedCustomElementCompleteEvent <p>AIGC custom entity information, this field has a value only when EventType is CreateAigcAdvancedCustomElementCompleteEvent.</p>
                     * 
                     */
                    void SetCreateAigcAdvancedCustomElementCompleteEvent(const CreateAigcAdvancedCustomElementTask& _createAigcAdvancedCustomElementCompleteEvent);

                    /**
                     * 判断参数 CreateAigcAdvancedCustomElementCompleteEvent 是否已赋值
                     * @return CreateAigcAdvancedCustomElementCompleteEvent 是否已赋值
                     * 
                     */
                    bool CreateAigcAdvancedCustomElementCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>AIGC custom tone information. This field has a value only when EventType is CreateAigcCustomVoiceCompleteEvent.</p>
                     * @return CreateAigcCustomVoiceCompleteEvent <p>AIGC custom tone information. This field has a value only when EventType is CreateAigcCustomVoiceCompleteEvent.</p>
                     * 
                     */
                    CreateAigcCustomVoiceTask GetCreateAigcCustomVoiceCompleteEvent() const;

                    /**
                     * 设置<p>AIGC custom tone information. This field has a value only when EventType is CreateAigcCustomVoiceCompleteEvent.</p>
                     * @param _createAigcCustomVoiceCompleteEvent <p>AIGC custom tone information. This field has a value only when EventType is CreateAigcCustomVoiceCompleteEvent.</p>
                     * 
                     */
                    void SetCreateAigcCustomVoiceCompleteEvent(const CreateAigcCustomVoiceTask& _createAigcCustomVoiceCompleteEvent);

                    /**
                     * 判断参数 CreateAigcCustomVoiceCompleteEvent 是否已赋值
                     * @return CreateAigcCustomVoiceCompleteEvent 是否已赋值
                     * 
                     */
                    bool CreateAigcCustomVoiceCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>Asynchronously fetch AIGC face information. This field has a value only when EventType is DescribeAigcFaceInfoAsyncComplete.</p>
                     * @return DescribeAigcFaceInfoAsyncCompleteEvent <p>Asynchronously fetch AIGC face information. This field has a value only when EventType is DescribeAigcFaceInfoAsyncComplete.</p>
                     * 
                     */
                    DescribeAigcFaceInfoAsyncTask GetDescribeAigcFaceInfoAsyncCompleteEvent() const;

                    /**
                     * 设置<p>Asynchronously fetch AIGC face information. This field has a value only when EventType is DescribeAigcFaceInfoAsyncComplete.</p>
                     * @param _describeAigcFaceInfoAsyncCompleteEvent <p>Asynchronously fetch AIGC face information. This field has a value only when EventType is DescribeAigcFaceInfoAsyncComplete.</p>
                     * 
                     */
                    void SetDescribeAigcFaceInfoAsyncCompleteEvent(const DescribeAigcFaceInfoAsyncTask& _describeAigcFaceInfoAsyncCompleteEvent);

                    /**
                     * 判断参数 DescribeAigcFaceInfoAsyncCompleteEvent 是否已赋值
                     * @return DescribeAigcFaceInfoAsyncCompleteEvent 是否已赋值
                     * 
                     */
                    bool DescribeAigcFaceInfoAsyncCompleteEventHasBeenSet() const;

                    /**
                     * 获取<p>AIGC Hunyuan 3D task info, this field has a value only when EventType is AigcHunyuan3DTaskComplete.</p>
                     * @return AigcHunyuan3DCompleteEvent <p>AIGC Hunyuan 3D task info, this field has a value only when EventType is AigcHunyuan3DTaskComplete.</p>
                     * 
                     */
                    AigcHunyuan3DTask GetAigcHunyuan3DCompleteEvent() const;

                    /**
                     * 设置<p>AIGC Hunyuan 3D task info, this field has a value only when EventType is AigcHunyuan3DTaskComplete.</p>
                     * @param _aigcHunyuan3DCompleteEvent <p>AIGC Hunyuan 3D task info, this field has a value only when EventType is AigcHunyuan3DTaskComplete.</p>
                     * 
                     */
                    void SetAigcHunyuan3DCompleteEvent(const AigcHunyuan3DTask& _aigcHunyuan3DCompleteEvent);

                    /**
                     * 判断参数 AigcHunyuan3DCompleteEvent 是否已赋值
                     * @return AigcHunyuan3DCompleteEvent 是否已赋值
                     * 
                     */
                    bool AigcHunyuan3DCompleteEventHasBeenSet() const;

                private:

                    /**
                     * <p>Event handler. The caller must call ConfirmEvents to acknowledge that the message has been received. The confirmation is valid for 30 seconds. After expiration, the event can be retrieved again.</p>
                     */
                    std::string m_eventHandle;
                    bool m_eventHandleHasBeenSet;

                    /**
                     * <p><b>Supported event types:</b></p><li>NewFileUpload: video upload completed;</li><li>ProcedureStateChanged: task flow status change;</li><li>FileDeleted: video deletion completed;</li><li>RestoreMediaComplete: video retrieval completion;</li><li>PullComplete: video pull completion;</li><li>EditMediaComplete: video editing completed;</li><li>SplitMediaComplete: video splitting completed;</li><li>ComposeMediaComplete: media file creation completion;</li><li>WechatMiniProgramPublishComplete: WeChat Mini Program Publishing Completed.</li><li>RemoveWatermark: intelligent watermark removal completion.</li><li>RebuildMediaComplete: audio and video quality rebirth completion event (not recommended).</li><li>ReviewAudioVideoComplete: audio/video moderation completed;</li><li>ExtractTraceWatermarkComplete: Traceability watermark extraction completed;</li><li>ExtractCopyRightWatermarkComplete: Extracting copyright watermark completion;</li><li>DescribeFileAttributesComplete: file attribute acquisition completion;</li><li>QualityInspectComplete: audio and video quality detection completed;</li><li>QualityEnhanceComplete: audio and video quality rebirth task completion;</li><li>PersistenceComplete: edit persistence completion;</li><li>ComplexAdaptiveDynamicStreamingComplete: complex adaptive bitstream task completion.</li><li>ProcessMediaByMPSComplete: MPS video processing completed.</li><li>AigcImageTaskComplete: AIGC image generation task completed.</li><li>AigcVideoTaskComplete: AIGC video generation task completed.</li><li>AigcHunyuan3DTaskComplete: AIGC Hunyuan 3D task completed.</li><li>DescribeAigcFaceInfoAsyncComplete: asynchronously fetch AIGC face information task completed.</li><b>Event types compatible with the 2017 version:</b><li>TranscodeComplete: video transcoding completion;</li><li>ConcatComplete: video splicing completion;</li><li>ClipComplete: video editing completed;</li><li>CreateImageSpriteComplete: Video thumbnail capture completion;</li><li>CreateSnapshotByTimeOffsetComplete: video screenshot by time point.</li>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * <p>Video upload completion event. Valid when the event type is NewFileUpload.</p>
                     */
                    FileUploadTask m_fileUploadEvent;
                    bool m_fileUploadEventHasBeenSet;

                    /**
                     * <p>Task flow status change event. Valid when the event type is ProcedureStateChanged.</p>
                     */
                    ProcedureTask m_procedureStateChangeEvent;
                    bool m_procedureStateChangeEventHasBeenSet;

                    /**
                     * <p>File deletion event. Valid when the event type is FileDeleted.</p>
                     */
                    FileDeleteTask m_fileDeleteEvent;
                    bool m_fileDeleteEventHasBeenSet;

                    /**
                     * <p>Video pull completion event. Valid when the event type is PullComplete.</p>
                     */
                    PullUploadTask m_pullCompleteEvent;
                    bool m_pullCompleteEventHasBeenSet;

                    /**
                     * <p>Video editing completion event. Valid when the event type is EditMediaComplete.</p>
                     */
                    EditMediaTask m_editMediaCompleteEvent;
                    bool m_editMediaCompleteEventHasBeenSet;

                    /**
                     * <p>Video splitting completion event. Valid when the event type is SplitMediaComplete.</p>
                     */
                    SplitMediaTask m_splitMediaCompleteEvent;
                    bool m_splitMediaCompleteEventHasBeenSet;

                    /**
                     * <p>Media file creation task completion event. Valid when the event type is ComposeMediaComplete.</p>
                     */
                    ComposeMediaTask m_composeMediaCompleteEvent;
                    bool m_composeMediaCompleteEventHasBeenSet;

                    /**
                     * <p>Video editing completion event. Valid when the event type is ClipComplete.</p>
                     */
                    ClipTask2017 m_clipCompleteEvent;
                    bool m_clipCompleteEventHasBeenSet;

                    /**
                     * <p>Video transcoding completion event. Valid when the event type is TranscodeComplete.</p>
                     */
                    TranscodeTask2017 m_transcodeCompleteEvent;
                    bool m_transcodeCompleteEventHasBeenSet;

                    /**
                     * <p>Video thumbnail capture completion event. Valid when the event type is CreateImageSpriteComplete.</p>
                     */
                    CreateImageSpriteTask2017 m_createImageSpriteCompleteEvent;
                    bool m_createImageSpriteCompleteEventHasBeenSet;

                    /**
                     * <p>Video splicing completion event. Valid when the event type is ConcatComplete.</p>
                     */
                    ConcatTask2017 m_concatCompleteEvent;
                    bool m_concatCompleteEventHasBeenSet;

                    /**
                     * <p>Video screenshot by time point completion event. Valid when the event type is CreateSnapshotByTimeOffsetComplete.</p>
                     */
                    SnapshotByTimeOffsetTask2017 m_snapshotByTimeOffsetCompleteEvent;
                    bool m_snapshotByTimeOffsetCompleteEventHasBeenSet;

                    /**
                     * <p>WeChat Publishing Completion Event, valid when the event type is WechatPublishComplete.</p>
                     */
                    WechatPublishTask m_wechatPublishCompleteEvent;
                    bool m_wechatPublishCompleteEventHasBeenSet;

                    /**
                     * <p>WeChat Mini Program Publishing Task Completion Event. Valid when the event type is WechatMiniProgramPublishComplete.</p>
                     */
                    WechatMiniProgramPublishTask m_wechatMiniProgramPublishCompleteEvent;
                    bool m_wechatMiniProgramPublishCompleteEventHasBeenSet;

                    /**
                     * <p>Intelligent Watermark Removal Completion Event, valid when the event type is RemoveWatermark.</p>
                     */
                    RemoveWatermarkTask m_removeWatermarkCompleteEvent;
                    bool m_removeWatermarkCompleteEventHasBeenSet;

                    /**
                     * <p>Video retrieval completion event. Valid when the event type is RestoreMediaComplete.</p>
                     */
                    RestoreMediaTask m_restoreMediaCompleteEvent;
                    bool m_restoreMediaCompleteEventHasBeenSet;

                    /**
                     * <p>Audio and video quality rebirth completion event. Valid when the event type is RebuildMediaComplete.</p>
                     */
                    RebuildMediaTask m_rebuildMediaCompleteEvent;
                    bool m_rebuildMediaCompleteEventHasBeenSet;

                    /**
                     * <p>Traceability watermark extraction completion event. Valid when the event type is ExtractTraceWatermarkComplete.</p>
                     */
                    ExtractTraceWatermarkTask m_extractTraceWatermarkCompleteEvent;
                    bool m_extractTraceWatermarkCompleteEventHasBeenSet;

                    /**
                     * <p>Copyright watermark extraction completion event, valid when the event type is ExtractCopyRightWatermarkComplete.</p>
                     */
                    ExtractCopyRightWatermarkTask m_extractCopyRightWatermarkCompleteEvent;
                    bool m_extractCopyRightWatermarkCompleteEventHasBeenSet;

                    /**
                     * <p>Audio/Video moderation completed event. Valid when the event type is ReviewAudioVideoComplete.</p>
                     */
                    ReviewAudioVideoTask m_reviewAudioVideoCompleteEvent;
                    bool m_reviewAudioVideoCompleteEventHasBeenSet;

                    /**
                     * <p>This field is invalid.</p>
                     */
                    ReduceMediaBitrateTask m_reduceMediaBitrateCompleteEvent;
                    bool m_reduceMediaBitrateCompleteEventHasBeenSet;

                    /**
                     * <p>File attribute acquisition completion event. Valid when the event type is DescribeFileAttributesComplete.</p>
                     */
                    DescribeFileAttributesTask m_describeFileAttributesCompleteEvent;
                    bool m_describeFileAttributesCompleteEventHasBeenSet;

                    /**
                     * <p>Audio and video quality detection completion event. Valid when the event type is QualityInspectComplete.</p>
                     */
                    QualityInspectTask m_qualityInspectCompleteEvent;
                    bool m_qualityInspectCompleteEventHasBeenSet;

                    /**
                     * <p>Audio and video quality rebirth completion event. Valid when the event type is QualityEnhanceComplete.</p>
                     */
                    QualityEnhanceTask m_qualityEnhanceCompleteEvent;
                    bool m_qualityEnhanceCompleteEventHasBeenSet;

                    /**
                     * <p>Media forwarding status change event, valid when the event type is MediaCastStatusChanged.</p>
                     */
                    MediaCastEvent m_mediaCastStatusChangedEvent;
                    bool m_mediaCastStatusChangedEventHasBeenSet;

                    /**
                     * <p>Editing solidification completion event. Valid when the event type is PersistenceComplete.</p>
                     */
                    PersistenceCompleteTask m_persistenceCompleteEvent;
                    bool m_persistenceCompleteEventHasBeenSet;

                    /**
                     * <p>Adaptive bitrate task information. It is valid only when EventType is ComplexAdaptiveDynamicStreamingComplete.</p>
                     */
                    ComplexAdaptiveDynamicStreamingTask m_complexAdaptiveDynamicStreamingCompleteEvent;
                    bool m_complexAdaptiveDynamicStreamingCompleteEventHasBeenSet;

                    /**
                     * <p>MPS video processing task information. Valid only when EventType is ProcessMediaByMPSComplete.</p>
                     */
                    ProcessMediaByMPS m_processMediaByMPSCompleteEvent;
                    bool m_processMediaByMPSCompleteEventHasBeenSet;

                    /**
                     * <p>AIGC image generation task info, valid only when EventType is AigcImageTaskComplete.</p>
                     */
                    AigcImageTask m_aigcImageCompleteEvent;
                    bool m_aigcImageCompleteEventHasBeenSet;

                    /**
                     * <p>Information of the AIGC video generation task. Valid only when EventType is AigcVideoTaskComplete.</p>
                     */
                    AigcVideoTask m_aigcVideoCompleteEvent;
                    bool m_aigcVideoCompleteEventHasBeenSet;

                    /**
                     * <p>Extract digital watermark information. Valid only when EventType is ExtractBlindWatermarkComplete.</p>
                     */
                    ExtractBlindWatermarkTask m_extractBlindWatermarkComplete;
                    bool m_extractBlindWatermarkCompleteHasBeenSet;

                    /**
                     * <p>AIGC scenario-based image generation task info. Valid only when EventType is SceneAigcImageCompleteEvent.</p>
                     */
                    SceneAigcImageTask m_sceneAigcImageCompleteEvent;
                    bool m_sceneAigcImageCompleteEventHasBeenSet;

                    /**
                     * <p>Image asynchronous task processing information. Valid only when EventType is ProcessImageAsyncCompleteEvent.</p>
                     */
                    ProcessImageAsyncTask m_processImageAsyncCompleteEvent;
                    bool m_processImageAsyncCompleteEventHasBeenSet;

                    /**
                     * <p>AIGC custom entity information, this field has a value only when EventType is CreateAigcAdvancedCustomElementCompleteEvent.</p>
                     */
                    CreateAigcAdvancedCustomElementTask m_createAigcAdvancedCustomElementCompleteEvent;
                    bool m_createAigcAdvancedCustomElementCompleteEventHasBeenSet;

                    /**
                     * <p>AIGC custom tone information. This field has a value only when EventType is CreateAigcCustomVoiceCompleteEvent.</p>
                     */
                    CreateAigcCustomVoiceTask m_createAigcCustomVoiceCompleteEvent;
                    bool m_createAigcCustomVoiceCompleteEventHasBeenSet;

                    /**
                     * <p>Asynchronously fetch AIGC face information. This field has a value only when EventType is DescribeAigcFaceInfoAsyncComplete.</p>
                     */
                    DescribeAigcFaceInfoAsyncTask m_describeAigcFaceInfoAsyncCompleteEvent;
                    bool m_describeAigcFaceInfoAsyncCompleteEventHasBeenSet;

                    /**
                     * <p>AIGC Hunyuan 3D task info, this field has a value only when EventType is AigcHunyuan3DTaskComplete.</p>
                     */
                    AigcHunyuan3DTask m_aigcHunyuan3DCompleteEvent;
                    bool m_aigcHunyuan3DCompleteEventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EVENTCONTENT_H_
