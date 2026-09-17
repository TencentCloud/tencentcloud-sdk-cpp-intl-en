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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETASKDETAILRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ProcedureTask.h>
#include <tencentcloud/vod/v20180717/model/EditMediaTask.h>
#include <tencentcloud/vod/v20180717/model/WechatPublishTask.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaTask.h>
#include <tencentcloud/vod/v20180717/model/SplitMediaTask.h>
#include <tencentcloud/vod/v20180717/model/WechatMiniProgramPublishTask.h>
#include <tencentcloud/vod/v20180717/model/PullUploadTask.h>
#include <tencentcloud/vod/v20180717/model/TranscodeTask2017.h>
#include <tencentcloud/vod/v20180717/model/ConcatTask2017.h>
#include <tencentcloud/vod/v20180717/model/ClipTask2017.h>
#include <tencentcloud/vod/v20180717/model/CreateImageSpriteTask2017.h>
#include <tencentcloud/vod/v20180717/model/SnapshotByTimeOffsetTask2017.h>
#include <tencentcloud/vod/v20180717/model/RemoveWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaTask.h>
#include <tencentcloud/vod/v20180717/model/ExtractTraceWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/ExtractCopyRightWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/ReviewAudioVideoTask.h>
#include <tencentcloud/vod/v20180717/model/ReduceMediaBitrateTask.h>
#include <tencentcloud/vod/v20180717/model/DescribeFileAttributesTask.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectTask.h>
#include <tencentcloud/vod/v20180717/model/QualityEnhanceTask.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTask.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaByMPS.h>
#include <tencentcloud/vod/v20180717/model/AigcImageTask.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTask.h>
#include <tencentcloud/vod/v20180717/model/ImportMediaKnowledgeTask.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcImageTask.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcVideoTask.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsync.h>
#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcAdvancedCustomElementTask.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcCustomVoiceTask.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcSubjectTask.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoRedrawTask.h>
#include <tencentcloud/vod/v20180717/model/AigcAudioTask.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcAudioCloneTask.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcFaceInfoAsyncTask.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DTask.h>
#include <tencentcloud/vod/v20180717/model/DesignVoiceAsyncTask.h>
#include <tencentcloud/vod/v20180717/model/CloneVoiceAsyncTask.h>
#include <tencentcloud/vod/v20180717/model/TextToSpeechAsyncTask.h>
#include <tencentcloud/vod/v20180717/model/VideoDubbingAsyncTask.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeTaskDetail response structure.
                */
                class DescribeTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeTaskDetailResponse();
                    ~DescribeTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return TaskType 
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Status 
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return CreateTime 
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return BeginProcessTime 
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     * 
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return FinishTime 
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProcedureTask 
                     * 
                     */
                    ProcedureTask GetProcedureTask() const;

                    /**
                     * 判断参数 ProcedureTask 是否已赋值
                     * @return ProcedureTask 是否已赋值
                     * 
                     */
                    bool ProcedureTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return EditMediaTask 
                     * 
                     */
                    EditMediaTask GetEditMediaTask() const;

                    /**
                     * 判断参数 EditMediaTask 是否已赋值
                     * @return EditMediaTask 是否已赋值
                     * 
                     */
                    bool EditMediaTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return WechatPublishTask 
                     * 
                     */
                    WechatPublishTask GetWechatPublishTask() const;

                    /**
                     * 判断参数 WechatPublishTask 是否已赋值
                     * @return WechatPublishTask 是否已赋值
                     * 
                     */
                    bool WechatPublishTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ComposeMediaTask 
                     * 
                     */
                    ComposeMediaTask GetComposeMediaTask() const;

                    /**
                     * 判断参数 ComposeMediaTask 是否已赋值
                     * @return ComposeMediaTask 是否已赋值
                     * 
                     */
                    bool ComposeMediaTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return SplitMediaTask 
                     * 
                     */
                    SplitMediaTask GetSplitMediaTask() const;

                    /**
                     * 判断参数 SplitMediaTask 是否已赋值
                     * @return SplitMediaTask 是否已赋值
                     * 
                     */
                    bool SplitMediaTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return WechatMiniProgramPublishTask 
                     * 
                     */
                    WechatMiniProgramPublishTask GetWechatMiniProgramPublishTask() const;

                    /**
                     * 判断参数 WechatMiniProgramPublishTask 是否已赋值
                     * @return WechatMiniProgramPublishTask 是否已赋值
                     * 
                     */
                    bool WechatMiniProgramPublishTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return PullUploadTask 
                     * 
                     */
                    PullUploadTask GetPullUploadTask() const;

                    /**
                     * 判断参数 PullUploadTask 是否已赋值
                     * @return PullUploadTask 是否已赋值
                     * 
                     */
                    bool PullUploadTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return TranscodeTask 
                     * 
                     */
                    TranscodeTask2017 GetTranscodeTask() const;

                    /**
                     * 判断参数 TranscodeTask 是否已赋值
                     * @return TranscodeTask 是否已赋值
                     * 
                     */
                    bool TranscodeTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ConcatTask 
                     * 
                     */
                    ConcatTask2017 GetConcatTask() const;

                    /**
                     * 判断参数 ConcatTask 是否已赋值
                     * @return ConcatTask 是否已赋值
                     * 
                     */
                    bool ConcatTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClipTask 
                     * 
                     */
                    ClipTask2017 GetClipTask() const;

                    /**
                     * 判断参数 ClipTask 是否已赋值
                     * @return ClipTask 是否已赋值
                     * 
                     */
                    bool ClipTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return CreateImageSpriteTask 
                     * 
                     */
                    CreateImageSpriteTask2017 GetCreateImageSpriteTask() const;

                    /**
                     * 判断参数 CreateImageSpriteTask 是否已赋值
                     * @return CreateImageSpriteTask 是否已赋值
                     * 
                     */
                    bool CreateImageSpriteTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return SnapshotByTimeOffsetTask 
                     * 
                     */
                    SnapshotByTimeOffsetTask2017 GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 判断参数 SnapshotByTimeOffsetTask 是否已赋值
                     * @return SnapshotByTimeOffsetTask 是否已赋值
                     * 
                     */
                    bool SnapshotByTimeOffsetTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return RemoveWatermarkTask 
                     * 
                     */
                    RemoveWatermarkTask GetRemoveWatermarkTask() const;

                    /**
                     * 判断参数 RemoveWatermarkTask 是否已赋值
                     * @return RemoveWatermarkTask 是否已赋值
                     * 
                     */
                    bool RemoveWatermarkTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return RebuildMediaTask 
                     * 
                     */
                    RebuildMediaTask GetRebuildMediaTask() const;

                    /**
                     * 判断参数 RebuildMediaTask 是否已赋值
                     * @return RebuildMediaTask 是否已赋值
                     * 
                     */
                    bool RebuildMediaTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExtractTraceWatermarkTask 
                     * 
                     */
                    ExtractTraceWatermarkTask GetExtractTraceWatermarkTask() const;

                    /**
                     * 判断参数 ExtractTraceWatermarkTask 是否已赋值
                     * @return ExtractTraceWatermarkTask 是否已赋值
                     * 
                     */
                    bool ExtractTraceWatermarkTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExtractCopyRightWatermarkTask 
                     * 
                     */
                    ExtractCopyRightWatermarkTask GetExtractCopyRightWatermarkTask() const;

                    /**
                     * 判断参数 ExtractCopyRightWatermarkTask 是否已赋值
                     * @return ExtractCopyRightWatermarkTask 是否已赋值
                     * 
                     */
                    bool ExtractCopyRightWatermarkTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReviewAudioVideoTask 
                     * 
                     */
                    ReviewAudioVideoTask GetReviewAudioVideoTask() const;

                    /**
                     * 判断参数 ReviewAudioVideoTask 是否已赋值
                     * @return ReviewAudioVideoTask 是否已赋值
                     * 
                     */
                    bool ReviewAudioVideoTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReduceMediaBitrateTask 
                     * 
                     */
                    ReduceMediaBitrateTask GetReduceMediaBitrateTask() const;

                    /**
                     * 判断参数 ReduceMediaBitrateTask 是否已赋值
                     * @return ReduceMediaBitrateTask 是否已赋值
                     * 
                     */
                    bool ReduceMediaBitrateTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return DescribeFileAttributesTask 
                     * 
                     */
                    DescribeFileAttributesTask GetDescribeFileAttributesTask() const;

                    /**
                     * 判断参数 DescribeFileAttributesTask 是否已赋值
                     * @return DescribeFileAttributesTask 是否已赋值
                     * 
                     */
                    bool DescribeFileAttributesTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return QualityInspectTask 
                     * 
                     */
                    QualityInspectTask GetQualityInspectTask() const;

                    /**
                     * 判断参数 QualityInspectTask 是否已赋值
                     * @return QualityInspectTask 是否已赋值
                     * 
                     */
                    bool QualityInspectTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return QualityEnhanceTask 
                     * 
                     */
                    QualityEnhanceTask GetQualityEnhanceTask() const;

                    /**
                     * 判断参数 QualityEnhanceTask 是否已赋值
                     * @return QualityEnhanceTask 是否已赋值
                     * 
                     */
                    bool QualityEnhanceTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ComplexAdaptiveDynamicStreamingTask 
                     * 
                     */
                    ComplexAdaptiveDynamicStreamingTask GetComplexAdaptiveDynamicStreamingTask() const;

                    /**
                     * 判断参数 ComplexAdaptiveDynamicStreamingTask 是否已赋值
                     * @return ComplexAdaptiveDynamicStreamingTask 是否已赋值
                     * 
                     */
                    bool ComplexAdaptiveDynamicStreamingTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProcessMediaByMPSTask 
                     * 
                     */
                    ProcessMediaByMPS GetProcessMediaByMPSTask() const;

                    /**
                     * 判断参数 ProcessMediaByMPSTask 是否已赋值
                     * @return ProcessMediaByMPSTask 是否已赋值
                     * 
                     */
                    bool ProcessMediaByMPSTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return AigcImageTask 
                     * 
                     */
                    AigcImageTask GetAigcImageTask() const;

                    /**
                     * 判断参数 AigcImageTask 是否已赋值
                     * @return AigcImageTask 是否已赋值
                     * 
                     */
                    bool AigcImageTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return AigcVideoTask 
                     * 
                     */
                    AigcVideoTask GetAigcVideoTask() const;

                    /**
                     * 判断参数 AigcVideoTask 是否已赋值
                     * @return AigcVideoTask 是否已赋值
                     * 
                     */
                    bool AigcVideoTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ImportMediaKnowledge 
                     * 
                     */
                    ImportMediaKnowledgeTask GetImportMediaKnowledge() const;

                    /**
                     * 判断参数 ImportMediaKnowledge 是否已赋值
                     * @return ImportMediaKnowledge 是否已赋值
                     * 
                     */
                    bool ImportMediaKnowledgeHasBeenSet() const;

                    /**
                     * 获取
                     * @return SceneAigcImageTask 
                     * 
                     */
                    SceneAigcImageTask GetSceneAigcImageTask() const;

                    /**
                     * 判断参数 SceneAigcImageTask 是否已赋值
                     * @return SceneAigcImageTask 是否已赋值
                     * 
                     */
                    bool SceneAigcImageTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return SceneAigcVideoTask 
                     * 
                     */
                    SceneAigcVideoTask GetSceneAigcVideoTask() const;

                    /**
                     * 判断参数 SceneAigcVideoTask 是否已赋值
                     * @return SceneAigcVideoTask 是否已赋值
                     * 
                     */
                    bool SceneAigcVideoTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProcessImageAsyncTask 
                     * 
                     */
                    ProcessImageAsync GetProcessImageAsyncTask() const;

                    /**
                     * 判断参数 ProcessImageAsyncTask 是否已赋值
                     * @return ProcessImageAsyncTask 是否已赋值
                     * 
                     */
                    bool ProcessImageAsyncTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExtractBlindWatermarkTask 
                     * 
                     */
                    ExtractBlindWatermarkTask GetExtractBlindWatermarkTask() const;

                    /**
                     * 判断参数 ExtractBlindWatermarkTask 是否已赋值
                     * @return ExtractBlindWatermarkTask 是否已赋值
                     * 
                     */
                    bool ExtractBlindWatermarkTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return CreateAigcAdvancedCustomElementTask 
                     * 
                     */
                    CreateAigcAdvancedCustomElementTask GetCreateAigcAdvancedCustomElementTask() const;

                    /**
                     * 判断参数 CreateAigcAdvancedCustomElementTask 是否已赋值
                     * @return CreateAigcAdvancedCustomElementTask 是否已赋值
                     * 
                     */
                    bool CreateAigcAdvancedCustomElementTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return CreateAigcCustomVoiceTask 
                     * 
                     */
                    CreateAigcCustomVoiceTask GetCreateAigcCustomVoiceTask() const;

                    /**
                     * 判断参数 CreateAigcCustomVoiceTask 是否已赋值
                     * @return CreateAigcCustomVoiceTask 是否已赋值
                     * 
                     */
                    bool CreateAigcCustomVoiceTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return CreateAigcSubjectTask 
                     * 
                     */
                    CreateAigcSubjectTask GetCreateAigcSubjectTask() const;

                    /**
                     * 判断参数 CreateAigcSubjectTask 是否已赋值
                     * @return CreateAigcSubjectTask 是否已赋值
                     * 
                     */
                    bool CreateAigcSubjectTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return AigcVideoRedrawTask 
                     * 
                     */
                    AigcVideoRedrawTask GetAigcVideoRedrawTask() const;

                    /**
                     * 判断参数 AigcVideoRedrawTask 是否已赋值
                     * @return AigcVideoRedrawTask 是否已赋值
                     * 
                     */
                    bool AigcVideoRedrawTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return AigcAudioTask 
                     * 
                     */
                    AigcAudioTask GetAigcAudioTask() const;

                    /**
                     * 判断参数 AigcAudioTask 是否已赋值
                     * @return AigcAudioTask 是否已赋值
                     * 
                     */
                    bool AigcAudioTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return CreateAigcAudioCloneTask 
                     * 
                     */
                    CreateAigcAudioCloneTask GetCreateAigcAudioCloneTask() const;

                    /**
                     * 判断参数 CreateAigcAudioCloneTask 是否已赋值
                     * @return CreateAigcAudioCloneTask 是否已赋值
                     * 
                     */
                    bool CreateAigcAudioCloneTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return DescribeAigcFaceInfoAsyncTask 
                     * 
                     */
                    DescribeAigcFaceInfoAsyncTask GetDescribeAigcFaceInfoAsyncTask() const;

                    /**
                     * 判断参数 DescribeAigcFaceInfoAsyncTask 是否已赋值
                     * @return DescribeAigcFaceInfoAsyncTask 是否已赋值
                     * 
                     */
                    bool DescribeAigcFaceInfoAsyncTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return AigcHunyuan3DTask 
                     * 
                     */
                    AigcHunyuan3DTask GetAigcHunyuan3DTask() const;

                    /**
                     * 判断参数 AigcHunyuan3DTask 是否已赋值
                     * @return AigcHunyuan3DTask 是否已赋值
                     * 
                     */
                    bool AigcHunyuan3DTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return DesignVoiceAsyncTask 
                     * 
                     */
                    DesignVoiceAsyncTask GetDesignVoiceAsyncTask() const;

                    /**
                     * 判断参数 DesignVoiceAsyncTask 是否已赋值
                     * @return DesignVoiceAsyncTask 是否已赋值
                     * 
                     */
                    bool DesignVoiceAsyncTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return CloneVoiceAsyncTask 
                     * 
                     */
                    CloneVoiceAsyncTask GetCloneVoiceAsyncTask() const;

                    /**
                     * 判断参数 CloneVoiceAsyncTask 是否已赋值
                     * @return CloneVoiceAsyncTask 是否已赋值
                     * 
                     */
                    bool CloneVoiceAsyncTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return TextToSpeechAsyncTask 
                     * 
                     */
                    TextToSpeechAsyncTask GetTextToSpeechAsyncTask() const;

                    /**
                     * 判断参数 TextToSpeechAsyncTask 是否已赋值
                     * @return TextToSpeechAsyncTask 是否已赋值
                     * 
                     */
                    bool TextToSpeechAsyncTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return VideoDubbingAsyncTask 
                     * 
                     */
                    VideoDubbingAsyncTask GetVideoDubbingAsyncTask() const;

                    /**
                     * 判断参数 VideoDubbingAsyncTask 是否已赋值
                     * @return VideoDubbingAsyncTask 是否已赋值
                     * 
                     */
                    bool VideoDubbingAsyncTaskHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 
                     */
                    ProcedureTask m_procedureTask;
                    bool m_procedureTaskHasBeenSet;

                    /**
                     * 
                     */
                    EditMediaTask m_editMediaTask;
                    bool m_editMediaTaskHasBeenSet;

                    /**
                     * 
                     */
                    WechatPublishTask m_wechatPublishTask;
                    bool m_wechatPublishTaskHasBeenSet;

                    /**
                     * 
                     */
                    ComposeMediaTask m_composeMediaTask;
                    bool m_composeMediaTaskHasBeenSet;

                    /**
                     * 
                     */
                    SplitMediaTask m_splitMediaTask;
                    bool m_splitMediaTaskHasBeenSet;

                    /**
                     * 
                     */
                    WechatMiniProgramPublishTask m_wechatMiniProgramPublishTask;
                    bool m_wechatMiniProgramPublishTaskHasBeenSet;

                    /**
                     * 
                     */
                    PullUploadTask m_pullUploadTask;
                    bool m_pullUploadTaskHasBeenSet;

                    /**
                     * 
                     */
                    TranscodeTask2017 m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * 
                     */
                    ConcatTask2017 m_concatTask;
                    bool m_concatTaskHasBeenSet;

                    /**
                     * 
                     */
                    ClipTask2017 m_clipTask;
                    bool m_clipTaskHasBeenSet;

                    /**
                     * 
                     */
                    CreateImageSpriteTask2017 m_createImageSpriteTask;
                    bool m_createImageSpriteTaskHasBeenSet;

                    /**
                     * 
                     */
                    SnapshotByTimeOffsetTask2017 m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * 
                     */
                    RemoveWatermarkTask m_removeWatermarkTask;
                    bool m_removeWatermarkTaskHasBeenSet;

                    /**
                     * 
                     */
                    RebuildMediaTask m_rebuildMediaTask;
                    bool m_rebuildMediaTaskHasBeenSet;

                    /**
                     * 
                     */
                    ExtractTraceWatermarkTask m_extractTraceWatermarkTask;
                    bool m_extractTraceWatermarkTaskHasBeenSet;

                    /**
                     * 
                     */
                    ExtractCopyRightWatermarkTask m_extractCopyRightWatermarkTask;
                    bool m_extractCopyRightWatermarkTaskHasBeenSet;

                    /**
                     * 
                     */
                    ReviewAudioVideoTask m_reviewAudioVideoTask;
                    bool m_reviewAudioVideoTaskHasBeenSet;

                    /**
                     * 
                     */
                    ReduceMediaBitrateTask m_reduceMediaBitrateTask;
                    bool m_reduceMediaBitrateTaskHasBeenSet;

                    /**
                     * 
                     */
                    DescribeFileAttributesTask m_describeFileAttributesTask;
                    bool m_describeFileAttributesTaskHasBeenSet;

                    /**
                     * 
                     */
                    QualityInspectTask m_qualityInspectTask;
                    bool m_qualityInspectTaskHasBeenSet;

                    /**
                     * 
                     */
                    QualityEnhanceTask m_qualityEnhanceTask;
                    bool m_qualityEnhanceTaskHasBeenSet;

                    /**
                     * 
                     */
                    ComplexAdaptiveDynamicStreamingTask m_complexAdaptiveDynamicStreamingTask;
                    bool m_complexAdaptiveDynamicStreamingTaskHasBeenSet;

                    /**
                     * 
                     */
                    ProcessMediaByMPS m_processMediaByMPSTask;
                    bool m_processMediaByMPSTaskHasBeenSet;

                    /**
                     * 
                     */
                    AigcImageTask m_aigcImageTask;
                    bool m_aigcImageTaskHasBeenSet;

                    /**
                     * 
                     */
                    AigcVideoTask m_aigcVideoTask;
                    bool m_aigcVideoTaskHasBeenSet;

                    /**
                     * 
                     */
                    ImportMediaKnowledgeTask m_importMediaKnowledge;
                    bool m_importMediaKnowledgeHasBeenSet;

                    /**
                     * 
                     */
                    SceneAigcImageTask m_sceneAigcImageTask;
                    bool m_sceneAigcImageTaskHasBeenSet;

                    /**
                     * 
                     */
                    SceneAigcVideoTask m_sceneAigcVideoTask;
                    bool m_sceneAigcVideoTaskHasBeenSet;

                    /**
                     * 
                     */
                    ProcessImageAsync m_processImageAsyncTask;
                    bool m_processImageAsyncTaskHasBeenSet;

                    /**
                     * 
                     */
                    ExtractBlindWatermarkTask m_extractBlindWatermarkTask;
                    bool m_extractBlindWatermarkTaskHasBeenSet;

                    /**
                     * 
                     */
                    CreateAigcAdvancedCustomElementTask m_createAigcAdvancedCustomElementTask;
                    bool m_createAigcAdvancedCustomElementTaskHasBeenSet;

                    /**
                     * 
                     */
                    CreateAigcCustomVoiceTask m_createAigcCustomVoiceTask;
                    bool m_createAigcCustomVoiceTaskHasBeenSet;

                    /**
                     * 
                     */
                    CreateAigcSubjectTask m_createAigcSubjectTask;
                    bool m_createAigcSubjectTaskHasBeenSet;

                    /**
                     * 
                     */
                    AigcVideoRedrawTask m_aigcVideoRedrawTask;
                    bool m_aigcVideoRedrawTaskHasBeenSet;

                    /**
                     * 
                     */
                    AigcAudioTask m_aigcAudioTask;
                    bool m_aigcAudioTaskHasBeenSet;

                    /**
                     * 
                     */
                    CreateAigcAudioCloneTask m_createAigcAudioCloneTask;
                    bool m_createAigcAudioCloneTaskHasBeenSet;

                    /**
                     * 
                     */
                    DescribeAigcFaceInfoAsyncTask m_describeAigcFaceInfoAsyncTask;
                    bool m_describeAigcFaceInfoAsyncTaskHasBeenSet;

                    /**
                     * 
                     */
                    AigcHunyuan3DTask m_aigcHunyuan3DTask;
                    bool m_aigcHunyuan3DTaskHasBeenSet;

                    /**
                     * 
                     */
                    DesignVoiceAsyncTask m_designVoiceAsyncTask;
                    bool m_designVoiceAsyncTaskHasBeenSet;

                    /**
                     * 
                     */
                    CloneVoiceAsyncTask m_cloneVoiceAsyncTask;
                    bool m_cloneVoiceAsyncTaskHasBeenSet;

                    /**
                     * 
                     */
                    TextToSpeechAsyncTask m_textToSpeechAsyncTask;
                    bool m_textToSpeechAsyncTaskHasBeenSet;

                    /**
                     * 
                     */
                    VideoDubbingAsyncTask m_videoDubbingAsyncTask;
                    bool m_videoDubbingAsyncTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETASKDETAILRESPONSE_H_
