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
                     * 获取<b>Supported event types:</b><li>`NewFileUpload`: Video uploaded.</li><li>`ProcedureStateChanged`: Task flow status changed.</li><li>`FileDeleted`: Video deleted.</li><li>`RestoreMediaComplete`: Video retrieved.</li><li>`PullComplete`: Finished video pulling.</li><li>`EditMediaComplete`: Finished video editing.</li><li>`SplitMediaComplete`: Finished video splitting.</li><li>`ComposeMediaComplete`: Finished producing the media file.</li><li>`WechatMiniProgramPublishComplete`: Finished publishing on Weixin Mini Program.</li><li>`RemoveWatermark`: Watermark removed.</li><li>`RebuildMediaComplete`: Finished audio/video remastering.</li><li>`ReviewAudioVideoComplete`: Finished moderation.</li><li>`ExtractTraceWatermarkComplete`: Finished digital watermark extraction.</li><li>`DescribeFileAttributesComplete`: Finished getting file attributes.</li><li>`QualityEnhanceComplete`: FinishedQualityEnhance.</li><b>v2017 task types:</b><li>`TranscodeComplete`: Finished video transcoding.</li><li>`ConcatComplete`: Finished video splicing.</li><li>`ClipComplete`: Finished video clipping.</li><li>`CreateImageSpriteComplete`: Finished image sprite generation.</li><li>`CreateSnapshotByTimeOffsetComplete`: Finished time point screencapturing.</li>
                     * @return EventType <b>Supported event types:</b><li>`NewFileUpload`: Video uploaded.</li><li>`ProcedureStateChanged`: Task flow status changed.</li><li>`FileDeleted`: Video deleted.</li><li>`RestoreMediaComplete`: Video retrieved.</li><li>`PullComplete`: Finished video pulling.</li><li>`EditMediaComplete`: Finished video editing.</li><li>`SplitMediaComplete`: Finished video splitting.</li><li>`ComposeMediaComplete`: Finished producing the media file.</li><li>`WechatMiniProgramPublishComplete`: Finished publishing on Weixin Mini Program.</li><li>`RemoveWatermark`: Watermark removed.</li><li>`RebuildMediaComplete`: Finished audio/video remastering.</li><li>`ReviewAudioVideoComplete`: Finished moderation.</li><li>`ExtractTraceWatermarkComplete`: Finished digital watermark extraction.</li><li>`DescribeFileAttributesComplete`: Finished getting file attributes.</li><li>`QualityEnhanceComplete`: FinishedQualityEnhance.</li><b>v2017 task types:</b><li>`TranscodeComplete`: Finished video transcoding.</li><li>`ConcatComplete`: Finished video splicing.</li><li>`ClipComplete`: Finished video clipping.</li><li>`CreateImageSpriteComplete`: Finished image sprite generation.</li><li>`CreateSnapshotByTimeOffsetComplete`: Finished time point screencapturing.</li>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<b>Supported event types:</b><li>`NewFileUpload`: Video uploaded.</li><li>`ProcedureStateChanged`: Task flow status changed.</li><li>`FileDeleted`: Video deleted.</li><li>`RestoreMediaComplete`: Video retrieved.</li><li>`PullComplete`: Finished video pulling.</li><li>`EditMediaComplete`: Finished video editing.</li><li>`SplitMediaComplete`: Finished video splitting.</li><li>`ComposeMediaComplete`: Finished producing the media file.</li><li>`WechatMiniProgramPublishComplete`: Finished publishing on Weixin Mini Program.</li><li>`RemoveWatermark`: Watermark removed.</li><li>`RebuildMediaComplete`: Finished audio/video remastering.</li><li>`ReviewAudioVideoComplete`: Finished moderation.</li><li>`ExtractTraceWatermarkComplete`: Finished digital watermark extraction.</li><li>`DescribeFileAttributesComplete`: Finished getting file attributes.</li><li>`QualityEnhanceComplete`: FinishedQualityEnhance.</li><b>v2017 task types:</b><li>`TranscodeComplete`: Finished video transcoding.</li><li>`ConcatComplete`: Finished video splicing.</li><li>`ClipComplete`: Finished video clipping.</li><li>`CreateImageSpriteComplete`: Finished image sprite generation.</li><li>`CreateSnapshotByTimeOffsetComplete`: Finished time point screencapturing.</li>
                     * @param _eventType <b>Supported event types:</b><li>`NewFileUpload`: Video uploaded.</li><li>`ProcedureStateChanged`: Task flow status changed.</li><li>`FileDeleted`: Video deleted.</li><li>`RestoreMediaComplete`: Video retrieved.</li><li>`PullComplete`: Finished video pulling.</li><li>`EditMediaComplete`: Finished video editing.</li><li>`SplitMediaComplete`: Finished video splitting.</li><li>`ComposeMediaComplete`: Finished producing the media file.</li><li>`WechatMiniProgramPublishComplete`: Finished publishing on Weixin Mini Program.</li><li>`RemoveWatermark`: Watermark removed.</li><li>`RebuildMediaComplete`: Finished audio/video remastering.</li><li>`ReviewAudioVideoComplete`: Finished moderation.</li><li>`ExtractTraceWatermarkComplete`: Finished digital watermark extraction.</li><li>`DescribeFileAttributesComplete`: Finished getting file attributes.</li><li>`QualityEnhanceComplete`: FinishedQualityEnhance.</li><b>v2017 task types:</b><li>`TranscodeComplete`: Finished video transcoding.</li><li>`ConcatComplete`: Finished video splicing.</li><li>`ClipComplete`: Finished video clipping.</li><li>`CreateImageSpriteComplete`: Finished image sprite generation.</li><li>`CreateSnapshotByTimeOffsetComplete`: Finished time point screencapturing.</li>
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FileUploadEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    FileUploadTask GetFileUploadEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fileUploadEvent 
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProcedureStateChangeEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ProcedureTask GetProcedureStateChangeEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _procedureStateChangeEvent 
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FileDeleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    FileDeleteTask GetFileDeleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fileDeleteEvent 
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PullCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    PullUploadTask GetPullCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _pullCompleteEvent 
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EditMediaCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    EditMediaTask GetEditMediaCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _editMediaCompleteEvent 
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SplitMediaCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SplitMediaTask GetSplitMediaCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _splitMediaCompleteEvent 
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ComposeMediaCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ComposeMediaTask GetComposeMediaCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _composeMediaCompleteEvent 
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ClipCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ClipTask2017 GetClipCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _clipCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TranscodeCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    TranscodeTask2017 GetTranscodeCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _transcodeCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateImageSpriteCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    CreateImageSpriteTask2017 GetCreateImageSpriteCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _createImageSpriteCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ConcatCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ConcatTask2017 GetConcatCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _concatCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SnapshotByTimeOffsetCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SnapshotByTimeOffsetTask2017 GetSnapshotByTimeOffsetCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _snapshotByTimeOffsetCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WechatPublishCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    WechatPublishTask GetWechatPublishCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _wechatPublishCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WechatMiniProgramPublishCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    WechatMiniProgramPublishTask GetWechatMiniProgramPublishCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _wechatMiniProgramPublishCompleteEvent 
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RemoveWatermarkCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    RemoveWatermarkTask GetRemoveWatermarkCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _removeWatermarkCompleteEvent 
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RestoreMediaCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    RestoreMediaTask GetRestoreMediaCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _restoreMediaCompleteEvent 
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RebuildMediaCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    RebuildMediaTask GetRebuildMediaCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _rebuildMediaCompleteEvent 
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExtractTraceWatermarkCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ExtractTraceWatermarkTask GetExtractTraceWatermarkCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _extractTraceWatermarkCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExtractCopyRightWatermarkCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ExtractCopyRightWatermarkTask GetExtractCopyRightWatermarkCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _extractCopyRightWatermarkCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReviewAudioVideoCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ReviewAudioVideoTask GetReviewAudioVideoCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _reviewAudioVideoCompleteEvent 
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReduceMediaBitrateCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ReduceMediaBitrateTask GetReduceMediaBitrateCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _reduceMediaBitrateCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DescribeFileAttributesCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    DescribeFileAttributesTask GetDescribeFileAttributesCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _describeFileAttributesCompleteEvent 
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return QualityInspectCompleteEvent 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    QualityInspectTask GetQualityInspectCompleteEvent() const;

                    /**
                     * 设置
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _qualityInspectCompleteEvent 
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

                private:

                    /**
                     * Event handler. The caller must call `ConfirmEvents` to confirm that the message has been received, and the confirmation is valid for 30 seconds. After the confirmation expires, the event can be obtained again.
                     */
                    std::string m_eventHandle;
                    bool m_eventHandleHasBeenSet;

                    /**
                     * <b>Supported event types:</b><li>`NewFileUpload`: Video uploaded.</li><li>`ProcedureStateChanged`: Task flow status changed.</li><li>`FileDeleted`: Video deleted.</li><li>`RestoreMediaComplete`: Video retrieved.</li><li>`PullComplete`: Finished video pulling.</li><li>`EditMediaComplete`: Finished video editing.</li><li>`SplitMediaComplete`: Finished video splitting.</li><li>`ComposeMediaComplete`: Finished producing the media file.</li><li>`WechatMiniProgramPublishComplete`: Finished publishing on Weixin Mini Program.</li><li>`RemoveWatermark`: Watermark removed.</li><li>`RebuildMediaComplete`: Finished audio/video remastering.</li><li>`ReviewAudioVideoComplete`: Finished moderation.</li><li>`ExtractTraceWatermarkComplete`: Finished digital watermark extraction.</li><li>`DescribeFileAttributesComplete`: Finished getting file attributes.</li><li>`QualityEnhanceComplete`: FinishedQualityEnhance.</li><b>v2017 task types:</b><li>`TranscodeComplete`: Finished video transcoding.</li><li>`ConcatComplete`: Finished video splicing.</li><li>`ClipComplete`: Finished video clipping.</li><li>`CreateImageSpriteComplete`: Finished image sprite generation.</li><li>`CreateSnapshotByTimeOffsetComplete`: Finished time point screencapturing.</li>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    FileUploadTask m_fileUploadEvent;
                    bool m_fileUploadEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ProcedureTask m_procedureStateChangeEvent;
                    bool m_procedureStateChangeEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    FileDeleteTask m_fileDeleteEvent;
                    bool m_fileDeleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    PullUploadTask m_pullCompleteEvent;
                    bool m_pullCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    EditMediaTask m_editMediaCompleteEvent;
                    bool m_editMediaCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SplitMediaTask m_splitMediaCompleteEvent;
                    bool m_splitMediaCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ComposeMediaTask m_composeMediaCompleteEvent;
                    bool m_composeMediaCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ClipTask2017 m_clipCompleteEvent;
                    bool m_clipCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    TranscodeTask2017 m_transcodeCompleteEvent;
                    bool m_transcodeCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    CreateImageSpriteTask2017 m_createImageSpriteCompleteEvent;
                    bool m_createImageSpriteCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ConcatTask2017 m_concatCompleteEvent;
                    bool m_concatCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SnapshotByTimeOffsetTask2017 m_snapshotByTimeOffsetCompleteEvent;
                    bool m_snapshotByTimeOffsetCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    WechatPublishTask m_wechatPublishCompleteEvent;
                    bool m_wechatPublishCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    WechatMiniProgramPublishTask m_wechatMiniProgramPublishCompleteEvent;
                    bool m_wechatMiniProgramPublishCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    RemoveWatermarkTask m_removeWatermarkCompleteEvent;
                    bool m_removeWatermarkCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    RestoreMediaTask m_restoreMediaCompleteEvent;
                    bool m_restoreMediaCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    RebuildMediaTask m_rebuildMediaCompleteEvent;
                    bool m_rebuildMediaCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ExtractTraceWatermarkTask m_extractTraceWatermarkCompleteEvent;
                    bool m_extractTraceWatermarkCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ExtractCopyRightWatermarkTask m_extractCopyRightWatermarkCompleteEvent;
                    bool m_extractCopyRightWatermarkCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ReviewAudioVideoTask m_reviewAudioVideoCompleteEvent;
                    bool m_reviewAudioVideoCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ReduceMediaBitrateTask m_reduceMediaBitrateCompleteEvent;
                    bool m_reduceMediaBitrateCompleteEventHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    DescribeFileAttributesTask m_describeFileAttributesCompleteEvent;
                    bool m_describeFileAttributesCompleteEventHasBeenSet;

                    /**
                     * 
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EVENTCONTENT_H_
