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
                * 
                */
                class EventContent : public AbstractModel
                {
                public:
                    EventContent();
                    ~EventContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return EventHandle 
                     * 
                     */
                    std::string GetEventHandle() const;

                    /**
                     * 设置
                     * @param _eventHandle 
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
                     * 获取
                     * @return EventType 
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置
                     * @param _eventType 
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
                     * 获取
                     * @return SplitMediaCompleteEvent 
                     * 
                     */
                    SplitMediaTask GetSplitMediaCompleteEvent() const;

                    /**
                     * 设置
                     * @param _splitMediaCompleteEvent 
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
                     * 获取
                     * @return RemoveWatermarkCompleteEvent 
                     * 
                     */
                    RemoveWatermarkTask GetRemoveWatermarkCompleteEvent() const;

                    /**
                     * 设置
                     * @param _removeWatermarkCompleteEvent 
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
                     * 获取
                     * @return RestoreMediaCompleteEvent 
                     * 
                     */
                    RestoreMediaTask GetRestoreMediaCompleteEvent() const;

                    /**
                     * 设置
                     * @param _restoreMediaCompleteEvent 
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
                     * 获取
                     * @return RebuildMediaCompleteEvent 
                     * 
                     */
                    RebuildMediaTask GetRebuildMediaCompleteEvent() const;

                    /**
                     * 设置
                     * @param _rebuildMediaCompleteEvent 
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
                     * 获取
                     * @return ExtractTraceWatermarkCompleteEvent 
                     * 
                     */
                    ExtractTraceWatermarkTask GetExtractTraceWatermarkCompleteEvent() const;

                    /**
                     * 设置
                     * @param _extractTraceWatermarkCompleteEvent 
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

                    /**
                     * 获取
                     * @return QualityEnhanceCompleteEvent 
                     * 
                     */
                    QualityEnhanceTask GetQualityEnhanceCompleteEvent() const;

                    /**
                     * 设置
                     * @param _qualityEnhanceCompleteEvent 
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
                     * 获取
                     * @return MediaCastStatusChangedEvent 
                     * 
                     */
                    MediaCastEvent GetMediaCastStatusChangedEvent() const;

                    /**
                     * 设置
                     * @param _mediaCastStatusChangedEvent 
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
                     * 获取
                     * @return PersistenceCompleteEvent 
                     * 
                     */
                    PersistenceCompleteTask GetPersistenceCompleteEvent() const;

                    /**
                     * 设置
                     * @param _persistenceCompleteEvent 
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
                     * 获取
                     * @return ComplexAdaptiveDynamicStreamingCompleteEvent 
                     * 
                     */
                    ComplexAdaptiveDynamicStreamingTask GetComplexAdaptiveDynamicStreamingCompleteEvent() const;

                    /**
                     * 设置
                     * @param _complexAdaptiveDynamicStreamingCompleteEvent 
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
                     * 获取
                     * @return ProcessMediaByMPSCompleteEvent 
                     * 
                     */
                    ProcessMediaByMPS GetProcessMediaByMPSCompleteEvent() const;

                    /**
                     * 设置
                     * @param _processMediaByMPSCompleteEvent 
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
                     * 获取
                     * @return AigcImageCompleteEvent 
                     * 
                     */
                    AigcImageTask GetAigcImageCompleteEvent() const;

                    /**
                     * 设置
                     * @param _aigcImageCompleteEvent 
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
                     * 获取
                     * @return AigcVideoCompleteEvent 
                     * 
                     */
                    AigcVideoTask GetAigcVideoCompleteEvent() const;

                    /**
                     * 设置
                     * @param _aigcVideoCompleteEvent 
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
                     * 获取
                     * @return ExtractBlindWatermarkComplete 
                     * 
                     */
                    ExtractBlindWatermarkTask GetExtractBlindWatermarkComplete() const;

                    /**
                     * 设置
                     * @param _extractBlindWatermarkComplete 
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
                     * 获取
                     * @return SceneAigcImageCompleteEvent 
                     * 
                     */
                    SceneAigcImageTask GetSceneAigcImageCompleteEvent() const;

                    /**
                     * 设置
                     * @param _sceneAigcImageCompleteEvent 
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
                     * 获取
                     * @return ProcessImageAsyncCompleteEvent 
                     * 
                     */
                    ProcessImageAsyncTask GetProcessImageAsyncCompleteEvent() const;

                    /**
                     * 设置
                     * @param _processImageAsyncCompleteEvent 
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
                     * 获取
                     * @return CreateAigcAdvancedCustomElementCompleteEvent 
                     * 
                     */
                    CreateAigcAdvancedCustomElementTask GetCreateAigcAdvancedCustomElementCompleteEvent() const;

                    /**
                     * 设置
                     * @param _createAigcAdvancedCustomElementCompleteEvent 
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
                     * 获取
                     * @return CreateAigcCustomVoiceCompleteEvent 
                     * 
                     */
                    CreateAigcCustomVoiceTask GetCreateAigcCustomVoiceCompleteEvent() const;

                    /**
                     * 设置
                     * @param _createAigcCustomVoiceCompleteEvent 
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
                     * 获取
                     * @return DescribeAigcFaceInfoAsyncCompleteEvent 
                     * 
                     */
                    DescribeAigcFaceInfoAsyncTask GetDescribeAigcFaceInfoAsyncCompleteEvent() const;

                    /**
                     * 设置
                     * @param _describeAigcFaceInfoAsyncCompleteEvent 
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
                     * 获取
                     * @return AigcHunyuan3DCompleteEvent 
                     * 
                     */
                    AigcHunyuan3DTask GetAigcHunyuan3DCompleteEvent() const;

                    /**
                     * 设置
                     * @param _aigcHunyuan3DCompleteEvent 
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
                     * 
                     */
                    std::string m_eventHandle;
                    bool m_eventHandleHasBeenSet;

                    /**
                     * 
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
                     * 
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
                     * 
                     */
                    RemoveWatermarkTask m_removeWatermarkCompleteEvent;
                    bool m_removeWatermarkCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    RestoreMediaTask m_restoreMediaCompleteEvent;
                    bool m_restoreMediaCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    RebuildMediaTask m_rebuildMediaCompleteEvent;
                    bool m_rebuildMediaCompleteEventHasBeenSet;

                    /**
                     * 
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

                    /**
                     * 
                     */
                    QualityEnhanceTask m_qualityEnhanceCompleteEvent;
                    bool m_qualityEnhanceCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    MediaCastEvent m_mediaCastStatusChangedEvent;
                    bool m_mediaCastStatusChangedEventHasBeenSet;

                    /**
                     * 
                     */
                    PersistenceCompleteTask m_persistenceCompleteEvent;
                    bool m_persistenceCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    ComplexAdaptiveDynamicStreamingTask m_complexAdaptiveDynamicStreamingCompleteEvent;
                    bool m_complexAdaptiveDynamicStreamingCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    ProcessMediaByMPS m_processMediaByMPSCompleteEvent;
                    bool m_processMediaByMPSCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    AigcImageTask m_aigcImageCompleteEvent;
                    bool m_aigcImageCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    AigcVideoTask m_aigcVideoCompleteEvent;
                    bool m_aigcVideoCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    ExtractBlindWatermarkTask m_extractBlindWatermarkComplete;
                    bool m_extractBlindWatermarkCompleteHasBeenSet;

                    /**
                     * 
                     */
                    SceneAigcImageTask m_sceneAigcImageCompleteEvent;
                    bool m_sceneAigcImageCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    ProcessImageAsyncTask m_processImageAsyncCompleteEvent;
                    bool m_processImageAsyncCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    CreateAigcAdvancedCustomElementTask m_createAigcAdvancedCustomElementCompleteEvent;
                    bool m_createAigcAdvancedCustomElementCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    CreateAigcCustomVoiceTask m_createAigcCustomVoiceCompleteEvent;
                    bool m_createAigcCustomVoiceCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    DescribeAigcFaceInfoAsyncTask m_describeAigcFaceInfoAsyncCompleteEvent;
                    bool m_describeAigcFaceInfoAsyncCompleteEventHasBeenSet;

                    /**
                     * 
                     */
                    AigcHunyuan3DTask m_aigcHunyuan3DCompleteEvent;
                    bool m_aigcHunyuan3DCompleteEventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EVENTCONTENT_H_
