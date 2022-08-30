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
                     */
                    std::string GetEventHandle() const;

                    /**
                     * 设置Event handler. The caller must call `ConfirmEvents` to confirm that the message has been received, and the confirmation is valid for 30 seconds. After the confirmation expires, the event can be obtained again.
                     * @param EventHandle Event handler. The caller must call `ConfirmEvents` to confirm that the message has been received, and the confirmation is valid for 30 seconds. After the confirmation expires, the event can be obtained again.
                     */
                    void SetEventHandle(const std::string& _eventHandle);

                    /**
                     * 判断参数 EventHandle 是否已赋值
                     * @return EventHandle 是否已赋值
                     */
                    bool EventHandleHasBeenSet() const;

                    /**
                     * 获取<b>Supported event types:</b>
<li>NewFileUpload: Video uploaded.</li>
<li>ProcedureStateChanged: Task flow status changed.</li>
<li>FileDeleted: Video deleted.</li>
<li>PullComplete: Finished video pulling.</li>
<li>EditMediaComplete: Finished video editing.</li>
<li>SplitMediaComplete: Finished video splitting.</li>
<li>WechatPublishComplete: Published to WeChat.</li>
<li>ComposeMediaComplete: Finished composition.</li>
<li>FastClipMediaComplete: Finished quick clipping.</li>
<b>v2017 task types:</b>
<li>TranscodeComplete: Finished video transcoding.</li>
<li>ConcatComplete: Finished video splicing.</li>
<li>ClipComplete: Finished video clipping.</li>
<li>CreateImageSpriteComplete: Finished image sprite generation.</li>
<li>CreateSnapshotByTimeOffsetComplete: Finished time point screencapturing.</li>
                     * @return EventType <b>Supported event types:</b>
<li>NewFileUpload: Video uploaded.</li>
<li>ProcedureStateChanged: Task flow status changed.</li>
<li>FileDeleted: Video deleted.</li>
<li>PullComplete: Finished video pulling.</li>
<li>EditMediaComplete: Finished video editing.</li>
<li>SplitMediaComplete: Finished video splitting.</li>
<li>WechatPublishComplete: Published to WeChat.</li>
<li>ComposeMediaComplete: Finished composition.</li>
<li>FastClipMediaComplete: Finished quick clipping.</li>
<b>v2017 task types:</b>
<li>TranscodeComplete: Finished video transcoding.</li>
<li>ConcatComplete: Finished video splicing.</li>
<li>ClipComplete: Finished video clipping.</li>
<li>CreateImageSpriteComplete: Finished image sprite generation.</li>
<li>CreateSnapshotByTimeOffsetComplete: Finished time point screencapturing.</li>
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<b>Supported event types:</b>
<li>NewFileUpload: Video uploaded.</li>
<li>ProcedureStateChanged: Task flow status changed.</li>
<li>FileDeleted: Video deleted.</li>
<li>PullComplete: Finished video pulling.</li>
<li>EditMediaComplete: Finished video editing.</li>
<li>SplitMediaComplete: Finished video splitting.</li>
<li>WechatPublishComplete: Published to WeChat.</li>
<li>ComposeMediaComplete: Finished composition.</li>
<li>FastClipMediaComplete: Finished quick clipping.</li>
<b>v2017 task types:</b>
<li>TranscodeComplete: Finished video transcoding.</li>
<li>ConcatComplete: Finished video splicing.</li>
<li>ClipComplete: Finished video clipping.</li>
<li>CreateImageSpriteComplete: Finished image sprite generation.</li>
<li>CreateSnapshotByTimeOffsetComplete: Finished time point screencapturing.</li>
                     * @param EventType <b>Supported event types:</b>
<li>NewFileUpload: Video uploaded.</li>
<li>ProcedureStateChanged: Task flow status changed.</li>
<li>FileDeleted: Video deleted.</li>
<li>PullComplete: Finished video pulling.</li>
<li>EditMediaComplete: Finished video editing.</li>
<li>SplitMediaComplete: Finished video splitting.</li>
<li>WechatPublishComplete: Published to WeChat.</li>
<li>ComposeMediaComplete: Finished composition.</li>
<li>FastClipMediaComplete: Finished quick clipping.</li>
<b>v2017 task types:</b>
<li>TranscodeComplete: Finished video transcoding.</li>
<li>ConcatComplete: Finished video splicing.</li>
<li>ClipComplete: Finished video clipping.</li>
<li>CreateImageSpriteComplete: Finished image sprite generation.</li>
<li>CreateSnapshotByTimeOffsetComplete: Finished time point screencapturing.</li>
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Video upload completion event, which is valid if the event type is `NewFileUpload`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileUploadEvent Video upload completion event, which is valid if the event type is `NewFileUpload`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FileUploadTask GetFileUploadEvent() const;

                    /**
                     * 设置Video upload completion event, which is valid if the event type is `NewFileUpload`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FileUploadEvent Video upload completion event, which is valid if the event type is `NewFileUpload`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFileUploadEvent(const FileUploadTask& _fileUploadEvent);

                    /**
                     * 判断参数 FileUploadEvent 是否已赋值
                     * @return FileUploadEvent 是否已赋值
                     */
                    bool FileUploadEventHasBeenSet() const;

                    /**
                     * 获取Task flow status change event, which is valid if the event type is `ProcedureStateChanged`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProcedureStateChangeEvent Task flow status change event, which is valid if the event type is `ProcedureStateChanged`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ProcedureTask GetProcedureStateChangeEvent() const;

                    /**
                     * 设置Task flow status change event, which is valid if the event type is `ProcedureStateChanged`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ProcedureStateChangeEvent Task flow status change event, which is valid if the event type is `ProcedureStateChanged`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProcedureStateChangeEvent(const ProcedureTask& _procedureStateChangeEvent);

                    /**
                     * 判断参数 ProcedureStateChangeEvent 是否已赋值
                     * @return ProcedureStateChangeEvent 是否已赋值
                     */
                    bool ProcedureStateChangeEventHasBeenSet() const;

                    /**
                     * 获取File deletion event, which is valid if the event type is `FileDeleted`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileDeleteEvent File deletion event, which is valid if the event type is `FileDeleted`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FileDeleteTask GetFileDeleteEvent() const;

                    /**
                     * 设置File deletion event, which is valid if the event type is `FileDeleted`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FileDeleteEvent File deletion event, which is valid if the event type is `FileDeleted`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFileDeleteEvent(const FileDeleteTask& _fileDeleteEvent);

                    /**
                     * 判断参数 FileDeleteEvent 是否已赋值
                     * @return FileDeleteEvent 是否已赋值
                     */
                    bool FileDeleteEventHasBeenSet() const;

                    /**
                     * 获取Video pull for upload completion event, which is valid if the event type is `PullComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PullCompleteEvent Video pull for upload completion event, which is valid if the event type is `PullComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    PullUploadTask GetPullCompleteEvent() const;

                    /**
                     * 设置Video pull for upload completion event, which is valid if the event type is `PullComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PullCompleteEvent Video pull for upload completion event, which is valid if the event type is `PullComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPullCompleteEvent(const PullUploadTask& _pullCompleteEvent);

                    /**
                     * 判断参数 PullCompleteEvent 是否已赋值
                     * @return PullCompleteEvent 是否已赋值
                     */
                    bool PullCompleteEventHasBeenSet() const;

                    /**
                     * 获取Video editing completion event, which is valid if the event type is `EditMediaComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EditMediaCompleteEvent Video editing completion event, which is valid if the event type is `EditMediaComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    EditMediaTask GetEditMediaCompleteEvent() const;

                    /**
                     * 设置Video editing completion event, which is valid if the event type is `EditMediaComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EditMediaCompleteEvent Video editing completion event, which is valid if the event type is `EditMediaComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEditMediaCompleteEvent(const EditMediaTask& _editMediaCompleteEvent);

                    /**
                     * 判断参数 EditMediaCompleteEvent 是否已赋值
                     * @return EditMediaCompleteEvent 是否已赋值
                     */
                    bool EditMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取Video splitting completion event, which is valid if the event type is `EditMediaComplete`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SplitMediaCompleteEvent Video splitting completion event, which is valid if the event type is `EditMediaComplete`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    SplitMediaTask GetSplitMediaCompleteEvent() const;

                    /**
                     * 设置Video splitting completion event, which is valid if the event type is `EditMediaComplete`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param SplitMediaCompleteEvent Video splitting completion event, which is valid if the event type is `EditMediaComplete`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSplitMediaCompleteEvent(const SplitMediaTask& _splitMediaCompleteEvent);

                    /**
                     * 判断参数 SplitMediaCompleteEvent 是否已赋值
                     * @return SplitMediaCompleteEvent 是否已赋值
                     */
                    bool SplitMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取Media file composing task completion event, which is valid when the event type is `ComposeMediaComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ComposeMediaCompleteEvent Media file composing task completion event, which is valid when the event type is `ComposeMediaComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ComposeMediaTask GetComposeMediaCompleteEvent() const;

                    /**
                     * 设置Media file composing task completion event, which is valid when the event type is `ComposeMediaComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ComposeMediaCompleteEvent Media file composing task completion event, which is valid when the event type is `ComposeMediaComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetComposeMediaCompleteEvent(const ComposeMediaTask& _composeMediaCompleteEvent);

                    /**
                     * 判断参数 ComposeMediaCompleteEvent 是否已赋值
                     * @return ComposeMediaCompleteEvent 是否已赋值
                     */
                    bool ComposeMediaCompleteEventHasBeenSet() const;

                    /**
                     * 获取Video clipping completion event, which is valid if the event type is `ClipComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClipCompleteEvent Video clipping completion event, which is valid if the event type is `ClipComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ClipTask2017 GetClipCompleteEvent() const;

                    /**
                     * 设置Video clipping completion event, which is valid if the event type is `ClipComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ClipCompleteEvent Video clipping completion event, which is valid if the event type is `ClipComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClipCompleteEvent(const ClipTask2017& _clipCompleteEvent);

                    /**
                     * 判断参数 ClipCompleteEvent 是否已赋值
                     * @return ClipCompleteEvent 是否已赋值
                     */
                    bool ClipCompleteEventHasBeenSet() const;

                    /**
                     * 获取Video transcoding completion event, which is valid if the event type is `TranscodeComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TranscodeCompleteEvent Video transcoding completion event, which is valid if the event type is `TranscodeComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    TranscodeTask2017 GetTranscodeCompleteEvent() const;

                    /**
                     * 设置Video transcoding completion event, which is valid if the event type is `TranscodeComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TranscodeCompleteEvent Video transcoding completion event, which is valid if the event type is `TranscodeComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTranscodeCompleteEvent(const TranscodeTask2017& _transcodeCompleteEvent);

                    /**
                     * 判断参数 TranscodeCompleteEvent 是否已赋值
                     * @return TranscodeCompleteEvent 是否已赋值
                     */
                    bool TranscodeCompleteEventHasBeenSet() const;

                    /**
                     * 获取Image sprite generating completion event, which is valid if the event type is `CreateImageSpriteComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateImageSpriteCompleteEvent Image sprite generating completion event, which is valid if the event type is `CreateImageSpriteComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CreateImageSpriteTask2017 GetCreateImageSpriteCompleteEvent() const;

                    /**
                     * 设置Image sprite generating completion event, which is valid if the event type is `CreateImageSpriteComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreateImageSpriteCompleteEvent Image sprite generating completion event, which is valid if the event type is `CreateImageSpriteComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreateImageSpriteCompleteEvent(const CreateImageSpriteTask2017& _createImageSpriteCompleteEvent);

                    /**
                     * 判断参数 CreateImageSpriteCompleteEvent 是否已赋值
                     * @return CreateImageSpriteCompleteEvent 是否已赋值
                     */
                    bool CreateImageSpriteCompleteEventHasBeenSet() const;

                    /**
                     * 获取Video splicing completion event, which is valid if the event type is `ConcatComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ConcatCompleteEvent Video splicing completion event, which is valid if the event type is `ConcatComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ConcatTask2017 GetConcatCompleteEvent() const;

                    /**
                     * 设置Video splicing completion event, which is valid if the event type is `ConcatComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ConcatCompleteEvent Video splicing completion event, which is valid if the event type is `ConcatComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConcatCompleteEvent(const ConcatTask2017& _concatCompleteEvent);

                    /**
                     * 判断参数 ConcatCompleteEvent 是否已赋值
                     * @return ConcatCompleteEvent 是否已赋值
                     */
                    bool ConcatCompleteEventHasBeenSet() const;

                    /**
                     * 获取Time point screencapturing completion event, which is valid when the event type is `CreateSnapshotByTimeOffsetComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotByTimeOffsetCompleteEvent Time point screencapturing completion event, which is valid when the event type is `CreateSnapshotByTimeOffsetComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    SnapshotByTimeOffsetTask2017 GetSnapshotByTimeOffsetCompleteEvent() const;

                    /**
                     * 设置Time point screencapturing completion event, which is valid when the event type is `CreateSnapshotByTimeOffsetComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SnapshotByTimeOffsetCompleteEvent Time point screencapturing completion event, which is valid when the event type is `CreateSnapshotByTimeOffsetComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSnapshotByTimeOffsetCompleteEvent(const SnapshotByTimeOffsetTask2017& _snapshotByTimeOffsetCompleteEvent);

                    /**
                     * 判断参数 SnapshotByTimeOffsetCompleteEvent 是否已赋值
                     * @return SnapshotByTimeOffsetCompleteEvent 是否已赋值
                     */
                    bool SnapshotByTimeOffsetCompleteEventHasBeenSet() const;

                    /**
                     * 获取Release on WeChat completion event, which is valid if the event type is `WechatPublishComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WechatPublishCompleteEvent Release on WeChat completion event, which is valid if the event type is `WechatPublishComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    WechatPublishTask GetWechatPublishCompleteEvent() const;

                    /**
                     * 设置Release on WeChat completion event, which is valid if the event type is `WechatPublishComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param WechatPublishCompleteEvent Release on WeChat completion event, which is valid if the event type is `WechatPublishComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWechatPublishCompleteEvent(const WechatPublishTask& _wechatPublishCompleteEvent);

                    /**
                     * 判断参数 WechatPublishCompleteEvent 是否已赋值
                     * @return WechatPublishCompleteEvent 是否已赋值
                     */
                    bool WechatPublishCompleteEventHasBeenSet() const;

                    /**
                     * 获取Release on WeChat Mini Program task completion event, which is valid if the event type is `WechatMiniProgramPublishComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WechatMiniProgramPublishCompleteEvent Release on WeChat Mini Program task completion event, which is valid if the event type is `WechatMiniProgramPublishComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    WechatMiniProgramPublishTask GetWechatMiniProgramPublishCompleteEvent() const;

                    /**
                     * 设置Release on WeChat Mini Program task completion event, which is valid if the event type is `WechatMiniProgramPublishComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param WechatMiniProgramPublishCompleteEvent Release on WeChat Mini Program task completion event, which is valid if the event type is `WechatMiniProgramPublishComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWechatMiniProgramPublishCompleteEvent(const WechatMiniProgramPublishTask& _wechatMiniProgramPublishCompleteEvent);

                    /**
                     * 判断参数 WechatMiniProgramPublishCompleteEvent 是否已赋值
                     * @return WechatMiniProgramPublishCompleteEvent 是否已赋值
                     */
                    bool WechatMiniProgramPublishCompleteEventHasBeenSet() const;

                    /**
                     * 获取Watermark removal completion event. This parameter is valid only if `TaskType` is `RemoveWatermark`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RemoveWatermarkCompleteEvent Watermark removal completion event. This parameter is valid only if `TaskType` is `RemoveWatermark`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    RemoveWatermarkTask GetRemoveWatermarkCompleteEvent() const;

                    /**
                     * 设置Watermark removal completion event. This parameter is valid only if `TaskType` is `RemoveWatermark`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param RemoveWatermarkCompleteEvent Watermark removal completion event. This parameter is valid only if `TaskType` is `RemoveWatermark`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRemoveWatermarkCompleteEvent(const RemoveWatermarkTask& _removeWatermarkCompleteEvent);

                    /**
                     * 判断参数 RemoveWatermarkCompleteEvent 是否已赋值
                     * @return RemoveWatermarkCompleteEvent 是否已赋值
                     */
                    bool RemoveWatermarkCompleteEventHasBeenSet() const;

                    /**
                     * 获取Callback for video retrieval. This parameter is valid when the event type is `RestoreMediaComplete`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RestoreMediaCompleteEvent Callback for video retrieval. This parameter is valid when the event type is `RestoreMediaComplete`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    RestoreMediaTask GetRestoreMediaCompleteEvent() const;

                    /**
                     * 设置Callback for video retrieval. This parameter is valid when the event type is `RestoreMediaComplete`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param RestoreMediaCompleteEvent Callback for video retrieval. This parameter is valid when the event type is `RestoreMediaComplete`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRestoreMediaCompleteEvent(const RestoreMediaTask& _restoreMediaCompleteEvent);

                    /**
                     * 判断参数 RestoreMediaCompleteEvent 是否已赋值
                     * @return RestoreMediaCompleteEvent 是否已赋值
                     */
                    bool RestoreMediaCompleteEventHasBeenSet() const;

                private:

                    /**
                     * Event handler. The caller must call `ConfirmEvents` to confirm that the message has been received, and the confirmation is valid for 30 seconds. After the confirmation expires, the event can be obtained again.
                     */
                    std::string m_eventHandle;
                    bool m_eventHandleHasBeenSet;

                    /**
                     * <b>Supported event types:</b>
<li>NewFileUpload: Video uploaded.</li>
<li>ProcedureStateChanged: Task flow status changed.</li>
<li>FileDeleted: Video deleted.</li>
<li>PullComplete: Finished video pulling.</li>
<li>EditMediaComplete: Finished video editing.</li>
<li>SplitMediaComplete: Finished video splitting.</li>
<li>WechatPublishComplete: Published to WeChat.</li>
<li>ComposeMediaComplete: Finished composition.</li>
<li>FastClipMediaComplete: Finished quick clipping.</li>
<b>v2017 task types:</b>
<li>TranscodeComplete: Finished video transcoding.</li>
<li>ConcatComplete: Finished video splicing.</li>
<li>ClipComplete: Finished video clipping.</li>
<li>CreateImageSpriteComplete: Finished image sprite generation.</li>
<li>CreateSnapshotByTimeOffsetComplete: Finished time point screencapturing.</li>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Video upload completion event, which is valid if the event type is `NewFileUpload`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FileUploadTask m_fileUploadEvent;
                    bool m_fileUploadEventHasBeenSet;

                    /**
                     * Task flow status change event, which is valid if the event type is `ProcedureStateChanged`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ProcedureTask m_procedureStateChangeEvent;
                    bool m_procedureStateChangeEventHasBeenSet;

                    /**
                     * File deletion event, which is valid if the event type is `FileDeleted`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FileDeleteTask m_fileDeleteEvent;
                    bool m_fileDeleteEventHasBeenSet;

                    /**
                     * Video pull for upload completion event, which is valid if the event type is `PullComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    PullUploadTask m_pullCompleteEvent;
                    bool m_pullCompleteEventHasBeenSet;

                    /**
                     * Video editing completion event, which is valid if the event type is `EditMediaComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    EditMediaTask m_editMediaCompleteEvent;
                    bool m_editMediaCompleteEventHasBeenSet;

                    /**
                     * Video splitting completion event, which is valid if the event type is `EditMediaComplete`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    SplitMediaTask m_splitMediaCompleteEvent;
                    bool m_splitMediaCompleteEventHasBeenSet;

                    /**
                     * Media file composing task completion event, which is valid when the event type is `ComposeMediaComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ComposeMediaTask m_composeMediaCompleteEvent;
                    bool m_composeMediaCompleteEventHasBeenSet;

                    /**
                     * Video clipping completion event, which is valid if the event type is `ClipComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ClipTask2017 m_clipCompleteEvent;
                    bool m_clipCompleteEventHasBeenSet;

                    /**
                     * Video transcoding completion event, which is valid if the event type is `TranscodeComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    TranscodeTask2017 m_transcodeCompleteEvent;
                    bool m_transcodeCompleteEventHasBeenSet;

                    /**
                     * Image sprite generating completion event, which is valid if the event type is `CreateImageSpriteComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CreateImageSpriteTask2017 m_createImageSpriteCompleteEvent;
                    bool m_createImageSpriteCompleteEventHasBeenSet;

                    /**
                     * Video splicing completion event, which is valid if the event type is `ConcatComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ConcatTask2017 m_concatCompleteEvent;
                    bool m_concatCompleteEventHasBeenSet;

                    /**
                     * Time point screencapturing completion event, which is valid when the event type is `CreateSnapshotByTimeOffsetComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    SnapshotByTimeOffsetTask2017 m_snapshotByTimeOffsetCompleteEvent;
                    bool m_snapshotByTimeOffsetCompleteEventHasBeenSet;

                    /**
                     * Release on WeChat completion event, which is valid if the event type is `WechatPublishComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    WechatPublishTask m_wechatPublishCompleteEvent;
                    bool m_wechatPublishCompleteEventHasBeenSet;

                    /**
                     * Release on WeChat Mini Program task completion event, which is valid if the event type is `WechatMiniProgramPublishComplete`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    WechatMiniProgramPublishTask m_wechatMiniProgramPublishCompleteEvent;
                    bool m_wechatMiniProgramPublishCompleteEventHasBeenSet;

                    /**
                     * Watermark removal completion event. This parameter is valid only if `TaskType` is `RemoveWatermark`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    RemoveWatermarkTask m_removeWatermarkCompleteEvent;
                    bool m_removeWatermarkCompleteEventHasBeenSet;

                    /**
                     * Callback for video retrieval. This parameter is valid when the event type is `RestoreMediaComplete`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    RestoreMediaTask m_restoreMediaCompleteEvent;
                    bool m_restoreMediaCompleteEventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EVENTCONTENT_H_
